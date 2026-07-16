// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: InstantiateClassMembers
// EXPECT-CRASH-ASSERT: MSInfo
// EXPECT-CRASH-ASSERT: information

template <typename T> struct Foo {};
template <> void Foo<int[42]>::bar(struct S{}) {}
template class Foo<int[42]>;
