// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};
template <typename T> bool tuple_size;

void foo() {
  S s;
  auto [... sa] = s;
}
