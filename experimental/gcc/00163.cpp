// RUN: clang++ -c %s
// EXPECT-FAIL

namespace std {
namespace decimal {
class decimal32 {
public:
  short &__val;
};

inline decimal32 operator+(decimal32 lhs, decimal32 rhs) {
  decimal32 tmp;
  tmp.__val = lhs.__val + rhs.__val;
  return tmp;
}
} // namespace decimal
} // namespace std
