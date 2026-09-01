// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: HandleSelectModifier
// EXPECT-CRASH-ASSERT: ArgumentEnd
// EXPECT-CRASH-ASSERT: Value
// EXPECT-CRASH-ASSERT: larger

typedef __attribute__((ext_vector_type(4))) float float4;

float4 foo[2] = {
    {1, 2},
};

static_assert(foo[2][0], "");
