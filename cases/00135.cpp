// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getBitFieldInfo
// EXPECT-CRASH-ASSERT: BitFields
// EXPECT-CRASH-ASSERT: Unable

struct S {
  char x : 0x100000000;
};

S s{0};
