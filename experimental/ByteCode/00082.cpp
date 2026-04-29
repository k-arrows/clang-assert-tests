// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Pointer
// EXPECT-CRASH-ASSERT: RootPtrMark
// EXPECT-CRASH-ASSERT: alignof
// EXPECT-CRASH-ASSERT: wrong

struct S {};
struct U : S {
  int bar() const { return 1; };
};

S s[0];

constexpr auto foo = static_cast<int (S::*)() const>(&U::bar);
static_assert((s[0].*foo)() == 1, "");
