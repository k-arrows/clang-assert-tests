// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T, bool B> struct S {
  static_assert(__is_trivially_assignable(struct {
    void f() { "");
    };

    struct N {
      N &operator=(N &);
    };

    static_assert(__is_trivially_assignable(N &, N &), "");
