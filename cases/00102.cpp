// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnPopScope
// EXPECT-CRASH-ASSERT: getFlags
// EXPECT-CRASH-ASSERT: TemplateParamScope
// EXPECT-CRASH-ASSERT: shouldn't

struct {
  void foo() noexcept(&&bar);
}
