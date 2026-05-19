// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T> T foo((struct S{}){42} >);

foo<>(0);
