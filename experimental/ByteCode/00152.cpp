// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deallocate
// EXPECT-CRASH-ASSERT: Site.Allocations.end

template <int N> constexpr bool foo(const char (&x)[N]) {
  int **p = new int *[N];
  for (int i = 0; i < N; i++)
    p[i] = new int(x[i]);
  for (int i = 0; i < N; j++)
    delete p[i];
  return true;
}

constexpr bool b = foo("foobar");
static_assert(b);
