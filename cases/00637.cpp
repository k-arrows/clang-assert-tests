// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <typename> struct S;
template <typename T> using F = S<T>::template I<>;
template <typename T> using F = S<T>::I<double>;
