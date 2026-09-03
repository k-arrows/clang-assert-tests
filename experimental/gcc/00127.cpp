// RUN: clang++ -c %s
// EXPECT-FAIL

#include <string>
#include <vector>

void foo(std::size_t, const std::nothrow_t & = std::nothrow_t());

template <class T> void bar() {
  std::vector<std::string> list;
  foo(&list);
}
