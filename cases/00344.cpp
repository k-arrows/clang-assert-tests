// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getTemplateTypeParmType
// EXPECT-CRASH-ASSERT: Depth
// EXPECT-CRASH-ASSERT: non-negative

template<auto Q> concept C = requires { Q.type; };
template<class> concept D = true;
static_assert(C<[]<D>{}>, "");
