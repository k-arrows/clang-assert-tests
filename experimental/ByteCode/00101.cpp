// RUN: clang++ -c -fblocks -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: readPointerToBuffer
// EXPECT-CRASH-ASSERT: isNullPtrType

struct S {
  void (^p)(){};
};

long l = __builtin_bit_cast(long, S{});
