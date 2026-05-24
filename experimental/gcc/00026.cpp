// RUN: clang++ -c %s
// EXPECT-PASS

template <typename T> class C {
  enum class E { e };
  E::T foo() { return E::e; }
};
