// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: addOrReplaceDecl
// EXPECT-CRASH-ASSERT: is_contained
// EXPECT-CRASH-ASSERT: Already

template <typename T> struct S {
  S const S &) = default;
};
