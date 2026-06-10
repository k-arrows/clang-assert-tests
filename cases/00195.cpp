// RUN: clang++ -c %s
// EXPECT-PASS

struct Foo {
  int x[10];
};

typedef __typeof__(__int128) size_t;
void *my_malloc(size_t) __attribute__((alloc_size(1)));

void alloc_foo(void) {
  struct Foo *ptr = (struct Foo *)my_malloc(sizeof(*ptr));
}
