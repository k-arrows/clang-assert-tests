// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copyComposite
// EXPECT-CRASH-ASSERT: getNumElems

void foo(void) {
  _Complex double cd;
  cd = *(_Complex double *)&(void *[1]){};
}
