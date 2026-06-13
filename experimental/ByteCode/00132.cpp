// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  if(__builtin_subcl(0, 0, 0, &(*({ struct {} x; &x; }))) != 0);
}
