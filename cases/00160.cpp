// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getCommonPtr
// EXPECT-CRASH-ASSERT: isNull
// EXPECT-CRASH-ASSERT: Cannot

int baz __attribute__((type_tag_for_datatype(test, int))) = 42;

int foo(...) __attribute__((pointer_with_type_tag(test, 1, 2)));

int bar() { foo(0, 42); }
