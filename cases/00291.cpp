// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

#include <initializer_list>

template <auto A>
concept C = requires { A.template operator()<float>(); };
template <class> auto Foo = {0};
static_assert(C<[]<Bar> {}>);
