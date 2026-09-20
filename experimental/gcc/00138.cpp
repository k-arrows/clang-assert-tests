// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template <typename T, template <typename> class TT> using Alias = TT<T>;

Alias a(42);
