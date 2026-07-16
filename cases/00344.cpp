// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template<auto Q> concept C = requires { Q.type; };
template<class> concept D = true;
static_assert(C<[]<D>{}>, "");
