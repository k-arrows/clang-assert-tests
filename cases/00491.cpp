// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: revertTokenIDToIdentifier
// EXPECT-CRASH-ASSERT: Already

foo < bar()

namespace N {
template <typename _Tp> struct __make_unsigned { typedef _Tp __type; };
struct __make_unsigned<char> { typedef char __type; };
} // namespace N
