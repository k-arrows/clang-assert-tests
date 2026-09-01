// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() {
#define F(...) {}(!__builtin_constant_p(__VA_ARGS__))
  F("" + 1);
}
