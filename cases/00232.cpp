// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LookupSpecialMember
// EXPECT-CRASH-ASSERT: DefaultConstructor
// EXPECT-CRASH-ASSERT: assignment

struct Y {
  struct X {};
  X &X::operator=(X &);
};

struct Z : public Y {};
