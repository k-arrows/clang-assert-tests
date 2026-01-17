// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkExceptionSpecification
// EXPECT-CRASH-ASSERT: isTypeDependent
// EXPECT-CRASH-ASSERT: getCanonicalTypeUnqualified
// EXPECT-CRASH-ASSERT: boolean

template <int... T> foo(void() noexcept(T)) {}
