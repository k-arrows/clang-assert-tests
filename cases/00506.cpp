// RUN: clang++ -c -std=c++20 -g %s
// EXPECT-CRASH-ASSERT: EmitUsingEnumDecl
// EXPECT-CRASH-ASSERT: shadow_size
// EXPECT-CRASH-ASSERT: codegening

enum E {};
using enum E;
