# $FreeBSD$

PORTNAME=	qsstv
PORTVERSION=	9.1.1
CATEGORIES=	comms hamradio
MASTER_SITES=	http://users.telenet.be/on4qz/qsstv/downloads/ \
		LOCAL/shurd
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Amateur Radio SSTV/FAX reception program for unix

LICENSE=	GPLv3

LIB_DEPENDS=	libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		libhamlib.so:comms/hamlib \
		libasound.so:audio/alsa-lib \
		libpulse.so:audio/pulseaudio \
		libopenjp2.so.7:graphics/openjpeg
BUILD_DEPENDS=	v4l_compat>=0:multimedia/v4l_compat

USES=		qmake
USE_QT5=	buildtools core gui network xml

OPTIONS_DEFINE=	DOCS
DOCS_CXXFLAGS=	-DWITH_DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
			-e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
			-e 's|%%DOCSDIR%%|${DOCSDIR}|g' \
			-e 's|%%PERL%%|${PERL}|g' \
		${WRKSRC}/qsstv/qsstv.pro ${WRKSRC}/qwt/qwt.pro \
		${WRKSRC}/qsstv/config/directoriesconfig.cpp \
		${WRKSRC}/qsstv/documentation/manual/manual.doxy \
		${WRKSRC}/qsstv/documentation/manual/manual/gettingstarted.html \
		${WRKSRC}/qsstv/documentation/manual/manual.txt
	${RM} ${WRKSRC}/qsstv/documentation/manual/manual.txt.*
	${RM} ${WRKSRC}/qsstv/documentation/manual/manual.*.orig

post-stage:
	-${RM} ${STAGEDIR}/${DOCSDIR}/manual.doxy
	-${RM} ${STAGEDIR}/${DOCSDIR}/doxygen_sqlite3.db
	-${RM} ${STAGEDIR}/${DOCSDIR}/*.bak
	-${RM} ${STAGEDIR}/${DOCSDIR}/*.orig

.include <bsd.port.mk>
