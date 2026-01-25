// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: Create
// EXPECT-CRASH-ASSERT: CK_LValueToRValue
// EXPECT-CRASH-ASSERT: isNullPtrType
// EXPECT-CRASH-ASSERT: getAsCXXRecordDecl
// EXPECT-CRASH-ASSERT: lvalue-to-rvalue

template <typename T> struct S {};

S<int> s;

[[clang::annotate("", s, s)]] int t() {};
