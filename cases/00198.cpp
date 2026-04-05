// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: LayoutWideBitField
// EXPECT-CRASH-ASSERT: CPlusPlus
// EXPECT-CRASH-ASSERT: bit-fields

#define CHECK(kind, name, size)                                                \
  int name##_1[sizeof(kind name) == size ? 1 : -1];

struct S {
  __attribute__((__mode__(__SI__))) long b : 42;
};

CHECK(struct, S, 24);
