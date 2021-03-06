--- DragAndDrop.c.orig	Fri Nov 22 19:19:27 1996
+++ DragAndDrop.c	Sat Feb 26 22:03:14 2000
@@ -22,7 +22,12 @@
 #include <X11/Xmu/WinUtil.h>
 #include <stdio.h>
 #include <stdlib.h>
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#include <limits.h>
+#define MAXINT INT_MAX
+#else
 #include <values.h>
+#endif
 
 /* Local variables */
 static Display		*dpy;		/* current display		*/
@@ -81,23 +86,23 @@
 
 static CursorData DndCursor[DndEND]={
   { 0,0,NULL,NULL,0,0,0 },
-  { grey_width,	grey_height,grey_bits,grey_mask_bits,
+  { grey_width,	grey_height,(char *)grey_bits,(char *)grey_mask_bits,
     grey_x_hot,grey_y_hot},
-  { file_width,file_height,file_bits,file_mask_bits,
+  { file_width,file_height,(char *)file_bits,(char *)file_mask_bits,
     file_x_hot,file_y_hot},
-  { files_width,files_height,files_bits,files_mask_bits,
+  { files_width,files_height,(char *)files_bits,(char *)files_mask_bits,
     files_x_hot,files_y_hot},
-  { text_width,text_height,text_bits,text_mask_bits,
+  { text_width,text_height,(char *)text_bits,(char *)text_mask_bits,
     text_x_hot,text_y_hot },
-  { dir_width,dir_height,dir_bits,dir_mask_bits,
+  { dir_width,dir_height,(char *)dir_bits,(char *)dir_mask_bits,
     dir_x_hot,dir_y_hot },
-  { link_width,link_height,link_bits,link_mask_bits,
+  { link_width,link_height,(char *)link_bits,(char *)link_mask_bits,
     link_x_hot,link_y_hot},
-  { app_width,app_height,app_bits,app_mask_bits,
+  { app_width,app_height,(char *)app_bits,(char *)app_mask_bits,
     app_x_hot,app_y_hot },
-  { url_width,url_height,url_bits,url_mask_bits,
+  { url_width,url_height,(char *)url_bits,(char *)url_mask_bits,
     url_x_hot,url_y_hot },
-  { mime_width,mime_height,mime_bits,mime_mask_bits,
+  { mime_width,mime_height,(char *)mime_bits,(char *)mime_mask_bits,
     mime_x_hot,mime_y_hot }  
 };
 
@@ -394,7 +399,7 @@
     if(MainWidget) return MainWidget;
 #ifdef DEBUG
     fprintf(stderr,"Multiple shells.\n");
-#endif DEBUG
+#endif
 	
     while(XtParent(widget) && XtIsRealized(XtParent(widget))==True)
 	widget=XtParent(widget);
