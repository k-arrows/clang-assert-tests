// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: setMemberSpecialization
// EXPECT-CRASH-ASSERT: getCommonPtr
// EXPECT-CRASH-ASSERT: Only

template<typename T> struct A {
  template<typename U> struct B {};
};

template<>
template<>
template<typename V>
struct A<int>::template B<bool>::C;

template<>
template<>
template<typename V>
struct A<int>::template B<bool>::C;
