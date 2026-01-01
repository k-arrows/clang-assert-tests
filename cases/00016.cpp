// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: AnnotatePreviousCachedTokens
// EXPECT-CRASH-ASSERT: getAnnotationEndLoc

int bar;

namespace A {
template <typename T> class X {
  friend foo(::bar::baz());
};
} // namespace A
