--- test/resize/resize_impl_sse2_test.cpp.orig	2016-01-22 18:12:28 UTC
+++ test/resize/resize_impl_sse2_test.cpp
@@ -7,6 +7,8 @@
 #include "gtest/gtest.h"
 #include "graph/filter_validator.h"
 
+#include <cmath> // INFINITY
+
 namespace {;
 
 void test_case(const zimg::resize::Filter &filter, bool horizontal, unsigned src_w, unsigned src_h, unsigned dst_w, unsigned dst_h,
