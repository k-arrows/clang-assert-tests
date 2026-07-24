// RUN: clang++ -c %s
// EXPECT-FAIL
// SKIP: aarch64

struct S {
  virtual ~S() __attribute__((vectorcall));
};

struct SS : S {
  ~SS();
};
