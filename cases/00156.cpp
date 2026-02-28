// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: hasAcceptableDefinition
// EXPECT-CRASH-ASSERT: missing

enum __attribute((mode(SI))) foo bar;
