// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: VisitCXXParenListOrInitListExpr
// EXPECT-CRASH-ASSERT: isFloatingType
// EXPECT-CRASH-ASSERT: unexpected

char *foo = (int (*[5])long){
#embed __FILE__
};
