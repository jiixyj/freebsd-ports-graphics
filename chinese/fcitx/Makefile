# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD$

PORTNAME=	fcitx
PORTVERSION=	4.2.8.6
PORTREVISION=	1
CATEGORIES=	chinese x11
MASTER_SITES=	http://download.fcitx-im.org/fcitx/:fcitx \
		http://download.fcitx-im.org/data/:data
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:fcitx \
		en_dict-${_DICT_VER}.tar.gz:data \
		pinyin.tar.gz:data \
		py_stroke-${_PYSTROKE_VER}.tar.gz:data \
		py_table-${_PYTABLE_VER}.tar.gz:data \
		table.tar.gz:data
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	lichray@gmail.com
COMMENT=	Flexible Input Method Framework

LICENSE=	GPLv2

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/iso-codes.pc:misc/iso-codes
LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libicuuc.so:devel/icu
RUN_DEPENDS=	xdg-open:devel/xdg-utils

SUB_FILES=	pkg-message
SUB_LIST+=	PORTSDIR=${PORTSDIR}

CONFLICTS=	zh-scim-fcitx-3.*

USE_GNOME=	pango intltool libxml2 introspection
USE_XORG=	x11 xext xkbfile
USE_LDCONFIG=	yes
USES=		tar:xz cmake desktop-file-utils execinfo gettext iconv:wchar_t \
		pkgconfig shared-mime-info
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=	GTK2 GTK3 QT4 OPENCC TPUNC DOCS
OPTIONS_DEFAULT=GTK2 QT4

GTK2_DESC=	Enable Gtk2 IM module
GTK3_DESC=	Enable Gtk3 IM module
QT4_DESC=	Enable Qt4 IM module
OPENCC_DESC=	Enable OpenCC for Chinese Transform
TPUNC_DESC=	Use traditional quotation marks

.include <bsd.port.options.mk>

CMAKE_ARGS+=	-DENABLE_XDGAUTOSTART=OFF -DFORCE_ENCHANT=ON \
		-DLIBICONV_LIBC_HAS_ICONV_OPEN=OFF \
		-DDATADIR=${DATADIR} \
		-DDOCSDIR=${DOCSDIR} \
		-DGOBJECT_INTROSPECTION_GIRDIR=${PREFIX}/share/gir-1.0 \
		-DGOBJECT_INTROSPECTION_TYPELIBDIR=${PREFIX}/lib/girepository-1.0 \
		-DMANPREFIX=${MANPREFIX} \
		-DPREFIX=${PREFIX} \
		-DQT_PLUGINS_DIR=${PREFIX}/lib/qt4/plugins

.if ${PORT_OPTIONS:MGTK2}
USE_GNOME+=	gtk20
PLIST_SUB+=	GTK2=""
SUB_LIST+=	GTK2_IM=fcitx
.else
CMAKE_ARGS+=	-DENABLE_GTK2_IM_MODULE=OFF
PLIST_SUB+=	GTK2="@comment "
SUB_LIST+=	GTK2_IM=xim
.endif

.if ${PORT_OPTIONS:MGTK3}
USE_GNOME+=	gtk30
CMAKE_ARGS+=	-DENABLE_GTK3_IM_MODULE=ON
PLIST_SUB+=	GTK3=""
SUB_LIST+=	GTK3_IM=fcitx
.else
PLIST_SUB+=	GTK3="@comment "
SUB_LIST+=	GTK3_IM=xim
.endif

.if ${PORT_OPTIONS:MQT4}
USE_QT4+=	qmake_build moc_build rcc_build uic_build dbus gui inputmethods
USE_LDCONFIG+=	${PREFIX}/lib/fcitx/qt
PLIST_SUB+=	QT4=""
.else
CMAKE_ARGS+=	-DENABLE_QT=OFF -DENABLE_QT_IM_MODULE=OFF -DENABLE_QT_GUI=OFF
PLIST_SUB+=	QT4="@comment "
.endif

.if ${PORT_OPTIONS:MOPENCC}
LIB_DEPENDS+=	libopencc.so:chinese/opencc
.else
CMAKE_ARGS+=	-DENABLE_OPENCC=OFF
.endif

.if ${PORT_OPTIONS:MTPUNC}
EXTRA_PATCHES+=	${FILESDIR}/tpunc-data_punc.mb.zh_CN
.endif

.if defined(WITH_DEBUG)
CMAKE_ARGS+=	-DENABLE_DEBUG=ON
.endif

DOCS_EXTRA_PATCHES_OFF=	${FILESDIR}/nodocs-doc_CMakeLists.txt

_DICT_VER=	20121020
_PYSTROKE_VER=	20121124
_PYTABLE_VER=	20121124

post-patch:
	@${CP} ${_DISTDIR}/en_dict-${_DICT_VER}.tar.gz ${WRKSRC}/src/module/spell/dict/.
	@${CP} ${_DISTDIR}/pinyin.tar.gz ${WRKSRC}/src/im/pinyin/data/.
	@${CP} ${_DISTDIR}/py_stroke-${_PYSTROKE_VER}.tar.gz ${WRKSRC}/src/module/pinyin-enhance/data/.
	@${CP} ${_DISTDIR}/py_table-${_PYTABLE_VER}.tar.gz ${WRKSRC}/src/module/pinyin-enhance/data/.
	@${CP} ${_DISTDIR}/table.tar.gz ${WRKSRC}/src/im/table/data/.

.include <bsd.port.mk>
