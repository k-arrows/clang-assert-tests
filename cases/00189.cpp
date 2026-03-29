// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <class... ArgTs> struct A {};
template <class... ArgTs> A(ArgTs...) -> A<typename ArgTs::value_type...>;
template <class... Ts> using Foo = A<Ts...>;
template <class T> using Bar = Foo<T, T>;

Bar a{0, 0};
