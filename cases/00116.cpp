// RUN: clang++ -c %s
// EXPECT-PASS

enum E {};
enum E;

enum {
  a = (__underlying_type(E)){},
};
