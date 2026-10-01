// RUN: clang++ -c %s
// EXPECT-PASS

typedef __SIZE_TYPE__ size_t;

namespace std {
struct nothrow_t {};
const nothrow_t nothrow = {};
} // namespace std

struct S {
  S();
  void *operator new(size_t, std::nothrow_t) throw();
};

S *foo() {
  S *p = new (std::nothrow) S;
  return new (std::nothrow) S;
}
