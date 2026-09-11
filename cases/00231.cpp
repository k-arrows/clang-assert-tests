// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

class C {};

C Foo() : bar { co_await ({}) }
