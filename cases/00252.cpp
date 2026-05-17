// RUN: clang++ -c %s
// EXPECT-FAIL

void bar(const int &x [[clang::lifetime_capture_by(this)]]);

void foo(long x) { bar(x); }
