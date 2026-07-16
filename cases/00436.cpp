// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getTemplateTypeParmType
// EXPECT-CRASH-ASSERT: Depth
// EXPECT-CRASH-ASSERT: non-negative

template <typename... Args> struct A {};
template <typename T> concept c = true;
template <> void foo(auto &&...args)
requires(A<decltype(args)...>::template B<[](auto x) {}>);

void bar() {
  foo<int>();
}
