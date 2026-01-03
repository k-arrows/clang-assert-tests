// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: FunctionProtoType
// EXPECT-CRASH-ASSERT: EST_DependentNoexcept
// EXPECT-CRASH-ASSERT: isValueDependent

template <int... T> void foo() { []() noexcept(sizeof(T) == 0); }
