// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

extern "C" {
float fabsf(float);
}

namespace std {
int abs(int &i);
}

void foo() { fabsf(42.); }
