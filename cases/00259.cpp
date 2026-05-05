// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isRepresentableIntegerValue
// EXPECT-CRASH-ASSERT: isIntegralType
// EXPECT-CRASH-ASSERT: isEnumeralType
// EXPECT-CRASH-ASSERT: required

enum __attribute__((mode(SF))) E { foo = 42 };
