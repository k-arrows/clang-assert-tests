// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

template <class {
}, class C > struct S;
template <Foo T> struct S<T, __type_pack_element<sizeof(T)>> {};
