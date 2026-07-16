// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};
struct T {
  template <> struct A<> {
  } auto a = v<S>;
}
