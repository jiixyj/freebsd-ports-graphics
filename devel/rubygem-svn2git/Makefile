# $FreeBSD$

PORTNAME=	svn2git
PORTVERSION=	2.3.2
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Ruby utilities for exporting SVN repo to git

LICENSE=	MIT

RUN_DEPENDS=	git-subversion>0:devel/git-subversion

CONFLICTS_INSTALL=	svn2git-[0-9]*

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/svn2git

.include <bsd.port.mk>
