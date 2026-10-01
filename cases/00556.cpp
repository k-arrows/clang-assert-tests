// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

namespace N1 {
template <typename T>
concept foo = true;
}

namespace N2 {
void bar() { N2::template foo<int>; }
} // namespace N2
