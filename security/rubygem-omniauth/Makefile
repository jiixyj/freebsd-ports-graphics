# $FreeBSD$

PORTNAME=	omniauth
PORTVERSION=	1.3.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generalized Rack framework for multiple-provider authentication

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-hashie>=1.2:devel/rubygem-hashie \
		rubygem-rack16>=1.0:www/rubygem-rack16

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
