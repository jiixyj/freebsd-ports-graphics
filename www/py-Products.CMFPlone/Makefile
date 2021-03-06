# $FreeBSD$

PORTNAME=	Products.CMFPlone
PORTVERSION=	4.3.7
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Plone Content Management System (core)

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Acquisition>=0:devel/py-Acquisition \
		${PYTHON_PKGNAMEPREFIX}DateTime>=0:devel/py-DateTime \
		${PYTHON_PKGNAMEPREFIX}ExtensionClass>=0:devel/py-ExtensionClass \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow \
		${PYTHON_PKGNAMEPREFIX}Products.ATContentTypes>=2.1.3:devel/py-Products.ATContentTypes \
		${PYTHON_PKGNAMEPREFIX}Products.Archetypes>=0:devel/py-Products.Archetypes \
		${PYTHON_PKGNAMEPREFIX}Products.CMFActionIcons>=0:devel/py-Products.CMFActionIcons \
		${PYTHON_PKGNAMEPREFIX}Products.CMFCalendar>=0:devel/py-Products.CMFCalendar \
		${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=0:devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.CMFDefault>=0:devel/py-Products.CMFDefault \
		${PYTHON_PKGNAMEPREFIX}Products.CMFDiffTool>=0:devel/py-Products.CMFDiffTool \
		${PYTHON_PKGNAMEPREFIX}Products.CMFDynamicViewFTI>=0:devel/py-Products.CMFDynamicViewFTI \
		${PYTHON_PKGNAMEPREFIX}Products.CMFEditions>=0:devel/py-Products.CMFEditions \
		${PYTHON_PKGNAMEPREFIX}Products.CMFFormController>=0:devel/py-Products.CMFFormController \
		${PYTHON_PKGNAMEPREFIX}Products.CMFQuickInstallerTool>=0:devel/py-Products.CMFQuickInstallerTool \
		${PYTHON_PKGNAMEPREFIX}Products.CMFUid>=0:devel/py-Products.CMFUid \
		${PYTHON_PKGNAMEPREFIX}Products.DCWorkflow>=0:devel/py-Products.DCWorkflow \
		${PYTHON_PKGNAMEPREFIX}Products.ExtendedPathIndex>=0:devel/py-Products.ExtendedPathIndex \
		${PYTHON_PKGNAMEPREFIX}Products.ExternalEditor>=0:devel/py-Products.ExternalEditor \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=1.4:devel/py-Products.GenericSetup \
		${PYTHON_PKGNAMEPREFIX}Products.MimetypesRegistry>=0:devel/py-Products.MimetypesRegistry \
		${PYTHON_PKGNAMEPREFIX}Products.PasswordResetTool>=0:devel/py-Products.PasswordResetTool \
		${PYTHON_PKGNAMEPREFIX}Products.PlacelessTranslationService>=0:devel/py-Products.PlacelessTranslationService \
		${PYTHON_PKGNAMEPREFIX}Products.PloneLanguageTool>=0:devel/py-Products.PloneLanguageTool \
		${PYTHON_PKGNAMEPREFIX}Products.PlonePAS>=0:security/py-Products.PlonePAS \
		${PYTHON_PKGNAMEPREFIX}Products.PluggableAuthService>=0:security/py-Products.PluggableAuthService \
		${PYTHON_PKGNAMEPREFIX}Products.PluginRegistry>=0:devel/py-Products.PluginRegistry \
		${PYTHON_PKGNAMEPREFIX}Products.PortalTransforms>=0:devel/py-Products.PortalTransforms \
		${PYTHON_PKGNAMEPREFIX}Products.ResourceRegistries>=0:devel/py-Products.ResourceRegistries \
		${PYTHON_PKGNAMEPREFIX}Products.TinyMCE>=0:www/py-Products.TinyMCE \
		${PYTHON_PKGNAMEPREFIX}Products.statusmessages>=0:devel/py-Products.statusmessages \
		zodb${PYTHON_PKGNAMESUFFIX}>=0:databases/zodb3 \
		${PYTHON_PKGNAMEPREFIX}archetypes.querywidget>0:devel/py-archetypes.querywidget \
		${PYTHON_PKGNAMEPREFIX}archetypes.referencebrowserwidget>=0:devel/py-archetypes.referencebrowserwidget \
		${PYTHON_PKGNAMEPREFIX}borg.localrole>=0:security/py-borg.localrole \
		${PYTHON_PKGNAMEPREFIX}five.customerize>=0:devel/py-five.customerize \
		${PYTHON_PKGNAMEPREFIX}five.localsitemanager>=0:devel/py-five.localsitemanager \
		${PYTHON_PKGNAMEPREFIX}plone.app.blob>=0:www/py-plone.app.blob \
		${PYTHON_PKGNAMEPREFIX}plone.app.collection>0:www/py-plone.app.collection \
		${PYTHON_PKGNAMEPREFIX}plone.app.content>=0:www/py-plone.app.content \
		${PYTHON_PKGNAMEPREFIX}plone.app.contentlisting>0:www/py-plone.app.contentlisting \
		${PYTHON_PKGNAMEPREFIX}plone.app.contentmenu>=1.1.6:www/py-plone.app.contentmenu \
		${PYTHON_PKGNAMEPREFIX}plone.app.contentrules>=0:www/py-plone.app.contentrules \
		${PYTHON_PKGNAMEPREFIX}plone.app.controlpanel>=0:www/py-plone.app.controlpanel \
		${PYTHON_PKGNAMEPREFIX}plone.app.customerize>=0:www/py-plone.app.customerize \
		${PYTHON_PKGNAMEPREFIX}plone.app.discussion>=0:www/py-plone.app.discussion \
		${PYTHON_PKGNAMEPREFIX}plone.app.folder>=0:www/py-plone.app.folder \
		${PYTHON_PKGNAMEPREFIX}plone.app.form>=0:www/py-plone.app.form \
		${PYTHON_PKGNAMEPREFIX}plone.app.i18n>=0:www/py-plone.app.i18n \
		${PYTHON_PKGNAMEPREFIX}plone.app.jquery>0:www/py-plone.app.jquery \
		${PYTHON_PKGNAMEPREFIX}plone.app.jquerytools>=0:www/py-plone.app.jquerytools \
		${PYTHON_PKGNAMEPREFIX}plone.app.layout>=1.1.7:www/py-plone.app.layout \
		${PYTHON_PKGNAMEPREFIX}plone.app.linkintegrity>=1.0.3:www/py-plone.app.linkintegrity \
		${PYTHON_PKGNAMEPREFIX}plone.app.locales>=0:www/py-plone.app.locales \
		${PYTHON_PKGNAMEPREFIX}plone.app.portlets>=0:www/py-plone.app.portlets \
		${PYTHON_PKGNAMEPREFIX}plone.app.redirector>=0:www/py-plone.app.redirector \
		${PYTHON_PKGNAMEPREFIX}plone.app.registry>=0:www/py-plone.app.registry \
		${PYTHON_PKGNAMEPREFIX}plone.app.search>0:www/py-plone.app.search \
		${PYTHON_PKGNAMEPREFIX}plone.app.upgrade>=0:www/py-plone.app.upgrade \
		${PYTHON_PKGNAMEPREFIX}plone.app.users>=0:www/py-plone.app.users \
		${PYTHON_PKGNAMEPREFIX}plone.app.uuid>=0:www/py-plone.app.uuid \
		${PYTHON_PKGNAMEPREFIX}plone.app.viewletmanager>=0:www/py-plone.app.viewletmanager \
		${PYTHON_PKGNAMEPREFIX}plone.app.vocabularies>=0:www/py-plone.app.vocabularies \
		${PYTHON_PKGNAMEPREFIX}plone.app.workflow>=0:www/py-plone.app.workflow \
		${PYTHON_PKGNAMEPREFIX}plone.batching>0:www/py-plone.batching \
		${PYTHON_PKGNAMEPREFIX}plone.browserlayer>=1.0rc4:www/py-plone.browserlayer \
		${PYTHON_PKGNAMEPREFIX}plone.contentrules>=0:www/py-plone.contentrules \
		${PYTHON_PKGNAMEPREFIX}plone.fieldsets>=0:www/py-plone.fieldsets \
		${PYTHON_PKGNAMEPREFIX}plone.i18n>=0:www/py-plone.i18n \
		${PYTHON_PKGNAMEPREFIX}plone.indexer>=0:www/py-plone.indexer \
		${PYTHON_PKGNAMEPREFIX}plone.intelligenttext>=0:www/py-plone.intelligenttext \
		${PYTHON_PKGNAMEPREFIX}plone.locking>=0:www/py-plone.locking \
		${PYTHON_PKGNAMEPREFIX}plone.memoize>=0:www/py-plone.memoize \
		${PYTHON_PKGNAMEPREFIX}plone.portlet.collection>=0:www/py-plone.portlet.collection \
		${PYTHON_PKGNAMEPREFIX}plone.portlet.static>=0:www/py-plone.portlet.static \
		${PYTHON_PKGNAMEPREFIX}plone.portlets>=0:www/py-plone.portlets \
		${PYTHON_PKGNAMEPREFIX}plone.protect>1.0:security/py-plone.protect \
		${PYTHON_PKGNAMEPREFIX}plone.registry>=0:www/py-plone.registry \
		${PYTHON_PKGNAMEPREFIX}plone.session>=0:security/py-plone.session \
		${PYTHON_PKGNAMEPREFIX}plone.theme>=0:www/py-plone.theme \
		${PYTHON_PKGNAMEPREFIX}plonetheme.classic>=0:www/py-plonetheme.classic \
		${PYTHON_PKGNAMEPREFIX}plonetheme.sunburst>=0:www/py-plonetheme.sunburst \
		${PYTHON_PKGNAMEPREFIX}transaction>=0:devel/py-transaction \
		${PYTHON_PKGNAMEPREFIX}z3c.autoinclude>=0:devel/py-z3c.autoinclude \
		${PYTHON_PKGNAMEPREFIX}zope.app.locales>=3.6.0:textproc/py-zope.app.locales \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}zope.container>=0:devel/py-zope.container \
		${PYTHON_PKGNAMEPREFIX}zope.deferredimport>=0:devel/py-zope.deferredimport \
		${PYTHON_PKGNAMEPREFIX}zope.deprecation>=0:devel/py-zope.deprecation \
		${PYTHON_PKGNAMEPREFIX}zope.dottedname>=0:devel/py-zope.dottedname \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:devel/py-zope.event \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:devel/py-zope.i18n \
		${PYTHON_PKGNAMEPREFIX}zope.i18nmessageid>=0:textproc/py-zope.i18nmessageid \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.location>=0:devel/py-zope.location \
		${PYTHON_PKGNAMEPREFIX}zope.pagetemplate>=0:devel/py-zope.pagetemplate \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=0:devel/py-zope.publisher \
		${PYTHON_PKGNAMEPREFIX}zope.site>=0:devel/py-zope.site \
		${PYTHON_PKGNAMEPREFIX}zope.structuredtext>=0:textproc/py-zope.structuredtext \
		${PYTHON_PKGNAMEPREFIX}zope.tal>=0:textproc/py-zope.tal \
		${PYTHON_PKGNAMEPREFIX}zope.tales>=0:devel/py-zope.tales \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:devel/py-zope.traversing

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
