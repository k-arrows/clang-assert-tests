// RUN: clang++ -c -x c %s
// EXPECT-FAIL

__attribute__((noreturn)) void foo();

__typeof__(*foo) bar;

void bar(int8_t) {}
