// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getFieldName
// EXPECT-CRASH-ASSERT: isFieldDesignator
// EXPECT-CRASH-ASSERT: Only

struct S {
  int x, y;
};

S s = {[0] = 0, .y = 0, .x = 0};
