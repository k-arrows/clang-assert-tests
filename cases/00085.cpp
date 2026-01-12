// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFriendTypeDecl
// EXPECT-CRASH-ASSERT: getStorageClassSpec
// EXPECT-CRASH-ASSERT: SCS_unspecified

class A {
  typedef T<> friend;
}
