// RUN: clang++ -c %s
// EXPECT-FAIL

template <class {
}, class C > struct S;
template <Foo T> struct S<T, __type_pack_element<sizeof(T)>> {};
