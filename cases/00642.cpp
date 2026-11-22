// RUN: clang++ -c -fsycl %s
// EXPECT-CRASH-ASSERT: data
// EXPECT-CRASH-ASSERT: DD
// EXPECT-CRASH-ASSERT: queried

template <int> struct S;

[[clang::sycl_kernel_entry_point(S<1>)]]
void foo(S<1> s) {}
