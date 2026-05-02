// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: PerformImplicitConversion
// EXPECT-CRASH-ASSERT: Context.hasSameType
// EXPECT-CRASH-ASSERT: ToAtomicType
// EXPECT-CRASH-ASSERT: getType

const int foo(bool b) { return 42; }

_Atomic int bar() { return foo(); }
