// RUN: clang++ -c -target powerpc64le-linux-gnu %s
// EXPECT-CRASH-ASSERT: ConvertDeclSpecToType
// EXPECT-CRASH-ASSERT: typeSize
// EXPECT-CRASH-ASSERT: greater

vector void foo();
