// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiagnoseBadDeduction
// EXPECT-CRASH-ASSERT: hasSameType

template <typename T> int &bar(__attribute__((address_space(1))) T &);
template &bar(T &);

void foo() { int &i = bar(baz); }
