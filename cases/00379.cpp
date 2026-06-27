// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <typename O> void foo(const O &) { static T t; }

template <typename O, void bar(const O &)> class C {
public:
  template <typename I> void baz(const I &i) { bar(i); }
};

void qux() {
  C<int, foo<int>> c;
  c.baz<int>(42);
}
