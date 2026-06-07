// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template <typename, template <typename> class... Fs> struct S;
template <typename T, template <typename> class F0,
          template <typename> class... Fs>
struct S<T, F0, Fs...> {
  template <class, Fs...>::type type;
};
