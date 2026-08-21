// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

foo(auto a);

namespace[[= 42]] N
