// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T, typename U> constexpr bool foo = false;
template <typename... T, typename U>
concept C = foo<T, U>;

void bar(C<char> auto... x);
