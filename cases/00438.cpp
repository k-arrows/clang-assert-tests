// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFinishCXXInClassMemberInitializer
// EXPECT-CRASH-ASSERT: getInClassInitStyle
// EXPECT-CRASH-ASSERT: must

struct S {
  template <> struct A<> {
  } foo = bar<>;
};
