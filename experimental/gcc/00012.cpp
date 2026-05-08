// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  operator int() const { return 1; }
};

template <int... Args> struct SS {
    SS(auto&&... {}
};

template <class... Args> SS(Args...) -> SS<>;

SS ss{S{}, 2};
