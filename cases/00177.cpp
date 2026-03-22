// RUN: clang++ -c -std=c++23 %s
// EXPECT-CRASH-ASSERT: DiagnoseImmediateEscalatingReason
// EXPECT-CRASH-ASSERT: hasBody
// EXPECT-CRASH-ASSERT: expected

consteval int foo() {}

template <class T> constexpr int bar(T t);

auto a1 = &bar<char>;

template <class T> constexpr int bar(T t) {
  return foo();

  auto a2 = false > ;
