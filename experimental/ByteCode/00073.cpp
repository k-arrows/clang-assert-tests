// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSize
// EXPECT-CRASH-ASSERT: isUnknownSizeArray

int(&&foo)[]{};
