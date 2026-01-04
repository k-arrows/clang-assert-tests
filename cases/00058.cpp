// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: insertPadding
// EXPECT-CRASH-ASSERT: Offset
// EXPECT-CRASH-ASSERT: Size

struct S {
  short a;
  char b[~(__SIZE_TYPE__)0 / __CHAR_BIT__ - 1];
};

struct S s[2];
