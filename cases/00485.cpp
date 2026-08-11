// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

struct S {};
template <typename T> bar C;

template <typename U> auto foo() {
  return []<typename T>(
             T, bool b = requires { C<T>; }) {
    static_assert(requires { requires C<U>; });
    return 0;
  };
}

auto baz = foo<int>();
int qux = baz(S{});
