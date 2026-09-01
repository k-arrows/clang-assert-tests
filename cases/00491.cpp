// RUN: clang++ -c %s
// EXPECT-FAIL

foo < bar()

namespace N {
template <typename _Tp> struct __make_unsigned { typedef _Tp __type; };
struct __make_unsigned<char> { typedef char __type; };
} // namespace N
