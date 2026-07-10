// RUN: clang++ -c -std=c++23 -fms-compatibility %s
// EXPECT-CRASH-ASSERT: front
// EXPECT-CRASH-ASSERT: empty

class S {
public:
  __declspec(property(get = Foo)) int x[];
};

void bar() {
  S *s;
  ((s->x)[])[];
}
