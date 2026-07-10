// RUN: clang++ -c %s
// EXPECT-FAIL

namespace N {
template <typename T> void foo();
void bar() {
  union {
  } ::foo<int>;
}
} // namespace N
