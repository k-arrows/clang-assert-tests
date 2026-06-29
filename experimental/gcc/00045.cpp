// RUN: clang++ -c %s
// EXPECT-FAIL

template <class T, foo...Args> concept C = requires() { T{}; };
template<class T, typename... Args> requires C<T, Args...> {}
