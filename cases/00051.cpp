// RUN: clang++ -c -x c %s
// EXPECT-FAIL

void foo(_Bool *zn) { printf("%zn", zn); }
