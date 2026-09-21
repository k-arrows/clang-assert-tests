// RUN: clang++ -c %s
// EXPECT-FAIL

int foo({}, 0);
