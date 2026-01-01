// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LookupSpecialMember
// EXPECT-CRASH-ASSERT: CanDeclareSpecialMemberFunction
// EXPECT-CRASH-ASSERT: doing

struct S {
  constexpr int p() : a {};
  static S (&r)[1] = {2, 3};
}
