// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFriendFunctionDecl
// EXPECT-CRASH-ASSERT: NameInfo

template <template <> class C> struct S {
  friend C();
};
