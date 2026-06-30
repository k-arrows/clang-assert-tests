// RUN: clang++ -c %s
// EXPECT-FAIL

namespace N {
/*template*/<class T> bool foo();
}

struct S {
  template <class T> bool foo();
  void bar() { (void *)(&N::foo<int>); }
};
