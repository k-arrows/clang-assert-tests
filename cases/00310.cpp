// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: evaluateValueImpl
// EXPECT-CRASH-ASSERT: isValueDependent

auto foo = ([](auto) -> decltype([] {}()) {}(0), 42);
