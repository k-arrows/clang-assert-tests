// RUN: clang++ -c %s
// EXPECT-FAIL

using F = int(*)(int);

F f = [](auto a) -> int requires foo {};
