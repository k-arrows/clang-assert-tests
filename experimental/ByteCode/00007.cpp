// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  __int128 foo : 1234;
};

S s{};
