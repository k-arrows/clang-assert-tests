// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

namespace std {
template <typename T> struct initializer_list {};
} // namespace std

void foo() {
  for (auto y : {1, 2})
    ;
  template for (auto y : {1, 2});
}
