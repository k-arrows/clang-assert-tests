// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ~DeclaratorScopeObj
// EXPECT-CRASH-ASSERT: SS.isSet
// EXPECT-CRASH-ASSERT: cleared

namespace N {
  template <class T> struct foo {};
  template <class T> ::~foo<T> {};
};
