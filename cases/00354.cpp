// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTemplateInstantiationArgs
// EXPECT-CRASH-ASSERT: NumLevels
// EXPECT-CRASH-ASSERT: Declaration

template <class T> using S = struct F {

  template <class TT> struct foo {
    TT t;
  };
  void bar(const char *c) { foo<const char *> baz = {c}; }
}
