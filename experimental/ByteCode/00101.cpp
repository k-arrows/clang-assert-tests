// RUN: clang++ -c -fblocks -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  void (^p)(){};
};

long l = __builtin_bit_cast(long, S{});
