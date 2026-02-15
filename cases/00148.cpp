// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DeduceReturnType
// EXPECT-CRASH-ASSERT: isUndeducedType
// EXPECT-CRASH-ASSERT: lambda

auto foo = [](auto a) __attribute__((ifunc(""))) {};

void (*bar)(int) = foo;
