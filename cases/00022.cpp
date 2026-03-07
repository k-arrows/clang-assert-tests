// RUN: clang++ -c %s
// EXPECT-FAIL

namespace std {
typedef decltype(sizeof(0)) size_t;
}

template <std::size_t... Seq> void f(std::type_pack_element<Seq...>) {}
