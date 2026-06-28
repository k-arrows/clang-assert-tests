// RUN: clang++ -c %s
// EXPECT-FAIL

template <auto = []<decltype>() {}> int x;
int y = x<>;
