// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: Length
// EXPECT-CRASH-ASSERT: Invalid

struct X {
} x;

void foo(X &x, X::bar baz [[clang::lifetime_capture_by(x)]] =);

void qux() { foo(x); }
