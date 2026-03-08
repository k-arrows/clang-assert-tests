// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: tryEmitGlobalCompoundLiteral
// EXPECT-CRASH-ASSERT: isFileScope
// EXPECT-CRASH-ASSERT: file-scope

struct SS {
  int &&i;
};
struct S {
  SS *ss;
};
constinit S s = {(SS[1]){1}};
