# $FreeBSD$

PORTNAME=	qstardict
PORTVERSION=	1.0.1
PORTREVISION=	3
CATEGORIES=	deskutils textproc kde
MASTER_SITES=	http://qstardict.ylsoftware.com/files/
PKGNAMEPREFIX=	plasma-applet-

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Dictionary plasma applet for KDE

RUN_DEPENDS=	${QSTARDICT_PLUGIN_PATH}/libstardict.so:textproc/qstardict

USES=		cmake tar:bzip2
USE_QT4=	qmake_build uic_build moc_build rcc_build
USE_KDE4=	automoc4 kdeprefix kdelibs
CMAKE_SOURCE_PATH=	${WRKSRC}/kdeplasma

QSTARDICT_PLUGIN_PATH=	${LOCALBASE}/lib/qstardict/plugins

post-patch:
	${REINPLACE_CMD} -e 's|/usr/lib/qstardict/plugins|${QSTARDICT_PLUGIN_PATH}|g' \
		${WRKSRC}/kdeplasma/dataengine/config.h.cmake

.include <bsd.port.mk>
