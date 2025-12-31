// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFriendFunctionDecl
// EXPECT-CRASH-ASSERT: getStorageClassSpec
// EXPECT-CRASH-ASSERT: SCS_unspecified

struct S {
  i mutable friend f();
};
