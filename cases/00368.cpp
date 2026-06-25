// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isSugared
// EXPECT-CRASH-ASSERT: D1
// EXPECT-CRASH-ASSERT: D2

namespace N {
/*template*/<class T> bool foo();
}

struct S {
  template <class T> bool foo();
  void bar() { (void *)(&N::foo<int>); }
};
