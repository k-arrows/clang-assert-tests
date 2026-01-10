// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: findAnonymousUnionVarDeclName
// EXPECT-CRASH-ASSERT: isUnion
// EXPECT-CRASH-ASSERT: RecordType

template <typename> void foo() {
  if (0) {
  } else {
    static struct {};
  }
}
