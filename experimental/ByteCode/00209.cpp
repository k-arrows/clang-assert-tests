// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: isBlockPointer

constexpr int foo() { return 0; }

namespace std {
template <typename T> struct allocator {
  constexpr void deallocate(void *p) { __builtin_operator_delete(p); }
};
} // namespace std

constexpr int bar = (std::allocator<int>().deallocate((int *)&foo), 1);
