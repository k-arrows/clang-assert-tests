// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFriendFunctionDecl
// EXPECT-CRASH-ASSERT: getName

struct S {
  friend([] {})();
};
