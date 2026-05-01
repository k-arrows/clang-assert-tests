// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setPreviousDecl
// EXPECT-CRASH-ASSERT: NamedDecl
// EXPECT-CRASH-ASSERT: static_cast
// EXPECT-CRASH-ASSERT: decl_type
// EXPECT-CRASH-ASSERT: isLinkageValid

struct S {};

extern const S s;
__attribute__((alias("foo"), weakref)) const S s;
