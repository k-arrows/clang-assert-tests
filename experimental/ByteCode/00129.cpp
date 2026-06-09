// RUN: clang++ -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

const __int128_t a = ((__int128_t)1 << 127);

void foo() { (void)(2 >> a); }
