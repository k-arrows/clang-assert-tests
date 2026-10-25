// RUN: clang++ -c %s
// EXPECT-FAIL

template <auto L =
              [] {
                struct S {
                  static const int i;
                  __attribute__((__assume__(i == 42)));
                };
              }>
auto foo{0};
