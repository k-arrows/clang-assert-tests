// RUN: clang++ -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <class T> auto foo() {
  []<U class TT>(TT<>) {};
}

void bar() { foo<int>; }
