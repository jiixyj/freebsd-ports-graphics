# $FreeBSD$

PORTNAME=	plone.outputfilters
PORTVERSION=	1.15
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Transformations applied to HTML in Plone text fields

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=0:devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:devel/py-Products.GenericSetup \
		${PYTHON_PKGNAMEPREFIX}Products.MimetypesRegistry>=0:devel/py-Products.MimetypesRegistry \
		${PYTHON_PKGNAMEPREFIX}Products.PortalTransforms>=0:devel/py-Products.PortalTransforms

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
