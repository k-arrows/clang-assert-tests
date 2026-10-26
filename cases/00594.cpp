// RUN: clang++ -c -target powerpc64le-linux-gnu %s
// EXPECT-CRASH-NOASSERT

__bf16 foo = 3.14;
