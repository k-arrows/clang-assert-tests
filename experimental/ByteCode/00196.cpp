// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

constexpr int (*p1)[0] = 0, (*p2)[0/*] = 0*/;
int p3 = p2 - p1;
