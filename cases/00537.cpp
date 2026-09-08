// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseCXXAmbiguousParenExpression
// EXPECT-CRASH-ASSERT: isTypeIdInParens
// EXPECT-CRASH-ASSERT: type-id

template <class T> struct S {};

namespace foo {};

int bar = (void(foo::S<int>));
