// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {
  enum E : int;
  constexpr int foo() const;
  bool b;
};

template <typename T> enum S<T>::E : bool { b = true };
template <typename T> constexpr int S<T>::foo() const { return b; }

static_assert(S<char>().foo(), "");
