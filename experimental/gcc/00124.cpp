// RUN: clang++ -c %s
// EXPECT-PASS

namespace std {
class type_info;
}

class C {
  virtual ~C();
};

void foo(const std::type_info &type);

void bar(C *c) {
  [=](auto a) { foo(typeid(*c)); }(1);
}
