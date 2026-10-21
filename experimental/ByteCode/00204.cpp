// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitVectorBinOp
// EXPECT-CRASH-ASSERT: LHSType
// EXPECT-CRASH-ASSERT: isVectorType

struct U {
  int n __attribute__((ext_vector_type(256)));
};

constexpr U u;

struct S {
  template <class T> constexpr T &&a(T &&t) { return (T &&)t; }
};

static_assert([](S s) { void(s.a(&u)->*s.a(&U::n)); }({}));
