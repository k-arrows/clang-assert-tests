// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

class vec {
public:
  int len;
};

#pragma omp declare mapper(vec v) map(v.foo[0 : 2])

void bar() {
  vec vv;
#pragma omp target
  {
    vv.len++;
  }
}
