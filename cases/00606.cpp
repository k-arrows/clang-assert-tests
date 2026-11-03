// RUN: clang++ -c -x objective-c++ %s
// EXPECT-CRASH-ASSERT: getIdentifierInfo
// EXPECT-CRASH-ASSERT: isAnnotation
// EXPECT-CRASH-ASSERT: token

int foo < bar()
