// RUN: clang++ -c %s
// EXPECT-FAIL

class C {
  C[[]] c{}()
};

static_assert(__builtin_bit_cast(char, C()), "");
