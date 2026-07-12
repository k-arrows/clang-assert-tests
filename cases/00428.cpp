// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: IsAccessible
// EXPECT-CRASH-ASSERT: UnprivilegedAccess
// EXPECT-CRASH-ASSERT: best

class A {
public:
  ~A();
};

class B {
  friend class C;

private:
  operator A *();
};

class C : public B {
private:
  using B::operator A *;
};

void foo() { delete C(); }
