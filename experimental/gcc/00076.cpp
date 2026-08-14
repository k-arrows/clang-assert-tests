// RUN: clang++ -c %s
// EXPECT-FAIL

namespace std {
template <typename T> class C;
C<int()> c([]() {});
} // namespace std
