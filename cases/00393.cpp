// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ~DeclaratorScopeObj
// EXPECT-CRASH-ASSERT: SS.isSet
// EXPECT-CRASH-ASSERT: cleared

void foo();

namespace N {
template <typename> struct S {
  template <> struct SS ss;
};
template <typename T> void foo();
}; // namespace N

template void N::S<int>::foo<float>();
