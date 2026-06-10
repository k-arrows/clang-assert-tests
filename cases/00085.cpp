// RUN: clang++ -c %s
// EXPECT-FAIL

class A {
  typedef T<> friend;
}
