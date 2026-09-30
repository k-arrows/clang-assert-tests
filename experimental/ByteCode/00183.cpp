// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitCXXStdInitializerListExpr
// EXPECT-CRASH-ASSERT: Initializing

namespace std {
typedef decltype(sizeof(int)) size_t;
template <class E> struct initializer_list {
  const E *data;
  size_t size;
};
} // namespace std

struct S {
  constexpr S() { std::initializer_list<int>{42}; }
};
