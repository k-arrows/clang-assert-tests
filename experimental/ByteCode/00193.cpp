// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

template <auto V> auto foo = bar(V);

union U {
  int baz;
  union {
    auto baz;
  } internal;
} u;

template int *foo<&u.baz>;
