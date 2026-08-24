// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T, T> class C {};

template <typename... Args, void (*foo)()> struct C<void (*)(Args...), foo> {};
