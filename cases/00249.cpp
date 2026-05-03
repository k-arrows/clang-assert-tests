// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <typename T> bool foo(T *p) { return __builtin_is_within_lifetime(p); }

char c = __builtin_bit_cast(char, foo);
