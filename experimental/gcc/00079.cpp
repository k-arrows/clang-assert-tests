// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

struct S {};
template <class T>
concept U = __has_unique_object_representations(T);

static_assert(U<S>);
