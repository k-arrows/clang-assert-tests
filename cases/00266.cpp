// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Perform
// EXPECT-CRASH-ASSERT: IK_Copy
// EXPECT-CRASH-ASSERT: isExplicitCast
// EXPECT-CRASH-ASSERT: IK_DirectList

template <bool> struct S;
template <bool B> using bar = S<B>;

struct SS {
  baz, class operator() {};
};

auto foo = SS{};
