// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename Iter, typename Pred>
inline Iter foo(Iter first, Iter last, Pred pred) {
#pragma GCC unroll 4
#pragma GCC novector
    while (first != last && !pred(*first) //)
        ++first;
    return first;
}

short *bar(short *p) {
  auto pred = [](short x) { return x == 42; };
  return foo(p, p + 1024, pred);
}
