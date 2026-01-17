// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setInitializedFieldInUnion
// EXPECT-CRASH-ASSERT: getInitializedFieldInUnion
// EXPECT-CRASH-ASSERT: nullptr
// EXPECT-CRASH-ASSERT: FD
// EXPECT-CRASH-ASSERT: Only

struct S {
  struct T {
    int a;
    union {
      int b;
      char x[];
    };
  } in, *inp;
} y[] = {
    [0].in.x = 1,
    &y[0].in.x,
    &y[0].in,
};
