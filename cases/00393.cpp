// RUN: clang++ -c %s
// EXPECT-FAIL

void foo();

namespace N {
template <typename> struct S {
  template <> struct SS ss;
};
template <typename T> void foo();
}; // namespace N

template void N::S<int>::foo<float>();
