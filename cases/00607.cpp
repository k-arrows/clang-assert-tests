// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: evalBinOpNN
// EXPECT-CRASH-ASSERT: PointerToMemberKind
// EXPECT-CRASH-ASSERT: pointer-to-member-type

#if defined(__GXX_ABI_VERSION) && __GXX_ABI_VERSION >= 100

struct S {};
struct SS {
  void (*ptr)();
};
typedef void (S::*sp)();

int foo() {
  sp s;
  SS *ss = (SS *)&s;
  s = 0;
  if (ss->ptr != 0)
    return 42;
}

#endif
