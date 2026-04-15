// RUN: clang++ -c %s
// EXPECT-FAIL

struct X {
} x;

void foo(X &x, X::bar baz [[clang::lifetime_capture_by(x)]] =);

void qux() { foo(x); }
