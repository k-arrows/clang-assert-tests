// RUN: clang++ -c -std=c++2d %s
// EXPECT-FAIL

struct S1 {
  int s1;
};
struct S2 : S1 {};
struct S3 : S2 {};
constexpr auto L = S3{.s1 = 1, .s2 = 2};
