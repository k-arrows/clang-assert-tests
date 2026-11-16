// RUN: clang++ -c -x objective-c++ %s
// EXPECT-CRASH-ASSERT: CastConsistency
// EXPECT-CRASH-ASSERT: isPointerType

Foo<typename T> struct S {};

template <typename T> int S<T>::bar(T t) { return int(t); }
