// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  int foo;
  S operator|(S) const;
};

struct SS : S {
  static const SS ss;
  static const SS bar = SS{ss | ss};
}
