// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename... Types> struct Var {};

struct A {};

template <typename V, typename... Types, typename... Args>
bool requires_types_args(V &&v, Var<Types...> &, Args &&...args) {
  return (true && ... && requires(V &&v, Types type, foo... args) {
    bar(forward<V>(v), forward<Types>(type), forward<Args>(args)...);
  });
}

void baz() {
  Var<int, char> v;
  requires_types_args(A(), v, 1, 'b');
}
