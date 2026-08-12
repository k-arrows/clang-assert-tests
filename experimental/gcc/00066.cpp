// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

bool foo() { return false; }

auto A() post(r : foo()) { return i; }
