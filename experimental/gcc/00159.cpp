// RUN: clang++ -c %s
// EXPECT-PASS

namespace std {
namespace decimal {
class decimal128 {
  char c[42];
};
void operator+(decimal128 lhs, decimal128 rhs) {}
} // namespace decimal
} // namespace std
