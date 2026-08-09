// RUN: clang++ -c %s
// EXPECT-PASS

struct C {
  struct V_impl {
    constexpr V_impl() {}
  };
  struct V_base {
    ~V_base();
    V_impl v_impl;
  };
  struct vec : private V_base {};
  struct S {
    S();
  };
  struct V {
    vec vv{};
  };
  struct FOO {
    V v[1]{};
    S s;
  };
  void foo() { FOO{}; }
};
