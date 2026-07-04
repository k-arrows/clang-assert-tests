// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFinishFunctionBody
// EXPECT-CRASH-ASSERT: exprNeedsCleanups
// EXPECT-CRASH-ASSERT: Unaccounted

struct S {
  S(const char *name) : name(name) {};
  ~S() {};
  const char *name;
};

struct SS {};

void foo() {
  SS s{({ for (;;) {} S; }), S("bar")};
}
