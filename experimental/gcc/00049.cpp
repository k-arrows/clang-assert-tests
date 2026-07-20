// RUN: clang++ -c %s
// EXPECT-FAIL

typedef __typeof__(sizeof 0) size_t;

void *operator new[](size_t, void *p) { return p; }

void foo() { new ("\42") char[3]; }
