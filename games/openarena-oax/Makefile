# Created by: Dominic Fandrey
# $FreeBSD$

PORTNAME=	oax
PORTVERSION=	B51
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://files.poulsander.com/~poul19/public_files/eliminationSource/
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	kamikaze@bsdforen.de
COMMENT=	OpenArena Mod: OpenArena Xpanded

PLIST_SUB+=	DISTNAME="${DISTNAME}" \
		PORTNAME="${PORTNAME}"

USES=		zip
NO_BUILD=	yes

OABASE=		${DISTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR})

.include "../openarena/Makefile.include"

.include <bsd.port.post.mk>
