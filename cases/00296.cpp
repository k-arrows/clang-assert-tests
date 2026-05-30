// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  virtual ~S() __attribute__((vectorcall));
};

struct SS : S {
  ~SS();
};
