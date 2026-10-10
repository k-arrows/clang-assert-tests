// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

struct SS {
  int &&i;
};
struct S {
  SS *ss;
};
constinit S s = {(SS[1]){1}};
