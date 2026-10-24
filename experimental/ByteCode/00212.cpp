// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DoBitCast
// EXPECT-CRASH-ASSERT: Ptr.isBlockPointer

template <class To, class From> constexpr To cast(const From &from) {
  return __builtin_bit_cast(To, from);
}

template <class C, class I> constexpr bool foo(const I &i) {
  return cast<I>(reinterpret_cast<const float &>("")) == i;
}

typedef bool b32 __attribute__((ext_vector_type(32)));

static_assert(foo<b32>(static_cast<int>(0x42)), "");
