// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isIntN
// EXPECT-CRASH-ASSERT: N-bit

template <typename T, int n> struct S;

template <typename T> struct S<T, 1> {
  typedef T foo __attribute__((ext_vector_type(0xdeadbeef)));
};

using char1 = S<char, 1>;

void bar() { char1 baz{42}; }
