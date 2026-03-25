// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

class Foo {
  void a;

public:
  constexpr int bar() {
    auto b = [this]() {};
    return 42;
  }
};

Foo f;

static_assert(f.bar() == 42, "");
