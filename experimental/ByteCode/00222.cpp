// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

namespace std {
struct type_info struct S {
  virtual ~S();
  constexpr void foo() { typeid((S &&)*nullptr); }
};
}; // namespace std
