// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkBuiltinTemplateIdType
// EXPECT-CRASH-ASSERT: Converted
// EXPECT-CRASH-ASSERT: __type_pack_element

namespace std {
typedef decltype(sizeof(0)) size_t;
}

template <std::size_t... Seq> void f(std::type_pack_element<Seq...>) {}
