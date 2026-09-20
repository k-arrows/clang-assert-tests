// RUN: clang++ -c %s
// EXPECT-PASS

auto foo() {
  struct S {
    int i;
  };
  return S{};
}

void bar() { auto a = decltype(foo()){0}; }

struct S {
} s;
