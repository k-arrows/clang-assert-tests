// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: UpdateAlignment
// EXPECT-CRASH-ASSERT: isPowerOf2_64
// EXPECT-CRASH-ASSERT: not

#pragma ms_struct on

struct S {
  _BitInt(129) x : 128;
};

static_assert(sizeof(S), "");
