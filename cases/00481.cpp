// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

class C {
  void foo();
  void bar() { decltype(&foo<>); }
};
