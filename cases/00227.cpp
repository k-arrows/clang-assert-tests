// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

struct S {
  template <typename T> static T t;
};
template <typename T> T S::t;
float foo = S::t<float>;
