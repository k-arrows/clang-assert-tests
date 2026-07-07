// RUN: clang++ -c %s
// EXPECT-FAIL

struct Y {
  struct X {};
  X &X::operator=(X &);
};

struct Z : public Y {};
