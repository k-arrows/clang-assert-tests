// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: Length
// EXPECT-CRASH-ASSERT: Invalid

template <auto...> struct X {};
template <typename T, typename... Ts> struct A {
  template <Ts... Ns> A(X<>, Ts (*...qs)[Ns]);
};

struct A {};

template <typename> struct B : A<int> {
  using A::A;
};

template <class T> B(T) -> B<T>;
