// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: setDepth
// EXPECT-CRASH-ASSERT: negative

template <auto L, typename... Ts>
concept foo = requires { L.template operator()<Ts...>(); };

template <auto P, typename... Ts>
concept bar = foo<[]<Ts...> {}>;

template <auto P, typename... Ts> requires bar<P, Ts...>
constexpr unsigned baz = [] { return 42; }();

constexpr auto L = []<typename T> { return __is_same(T, long); };
static_assert(baz<L> == 42, "");
