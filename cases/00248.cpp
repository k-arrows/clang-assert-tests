// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

namespace bar {
struct S {};
} // namespace bar

int ::bar::S::baz::*foo;
