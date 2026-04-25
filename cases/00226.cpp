// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: InstantiatedLocal
// EXPECT-CRASH-ASSERT: Stored
// EXPECT-CRASH-ASSERT: Already

template <typename T> void foo() {
  enum E;
  enum E int;
}

void bar = foo<int>();
