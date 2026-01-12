// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getTypeInfoImpl
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: should

class A { };

template<typename T> struct foo {
  enum class E : T A ;
};

template struct foo<unsigned>;

foo<int> bar;
