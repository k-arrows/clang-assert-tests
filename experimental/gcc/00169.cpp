// RUN: clang++ -c %s
// EXPECT-FAIL

float __One(float f) { return 1.0f * f; }
float One(void f) __attribute__((alias("_Z5__Onef")));
