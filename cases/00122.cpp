// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getStored
// EXPECT-CRASH-ASSERT: isStoredKind

struct S {
  void func();
}

S s(__builtin_invoke(&::func, s));
