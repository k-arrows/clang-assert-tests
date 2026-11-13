// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getStructField
// EXPECT-CRASH-ASSERT: isStruct
// EXPECT-CRASH-ASSERT: accessor

typedef struct {
  double _Complex z;
} S;

S s;

void foo() { --s.z; }
