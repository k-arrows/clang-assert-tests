// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

namespace N {
foo(auto);
}

struct S {};
