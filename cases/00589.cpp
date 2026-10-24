// RUN: clang++ %s
// EXPECT-CRASH-NOASSERT

template <class To, class From> constexpr To cast(const From &from) {
  __builtin_bit_cast(To, from);
}

struct S {
  S s;
  enum E { e } E;
};

static_assert(cast<S>((char)42).E == S::E::e);
