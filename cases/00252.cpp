// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: Length
// EXPECT-CRASH-ASSERT: Invalid

void bar(const int &x [[clang::lifetime_capture_by(this)]]);

void foo(long x) { bar(x); }
