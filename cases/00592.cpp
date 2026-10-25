// RUN: clang++ -c -target powerpc64le-linux-gnu %s
// EXPECT-CRASH-NOASSERT

void foo() : bar(__vector) {}
