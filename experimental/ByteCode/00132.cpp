// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deref
// EXPECT-CRASH-ASSERT: isLive
// EXPECT-CRASH-ASSERT: Invalid

void foo() {
  if(__builtin_subcl(0, 0, 0, &(*({ struct {} x; &x; }))) != 0);
}
