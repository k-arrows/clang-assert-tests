// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {
  static const bool b;
};

template <typename T> const bool S<T>::b(f());

int main() {
  S<int> a;
  if (!a.b)
    return 1;

  return 0;
}
