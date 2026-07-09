// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: ClassifyName
// EXPECT-CRASH-ASSERT: NextToken.isNot
// EXPECT-CRASH-ASSERT: specifiers

int foo();

void bar() {
  []<typename... T> { T...[foo()] FooT::BarT<>; }();
}
