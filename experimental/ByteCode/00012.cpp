// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

const double x = 0.;

void foo() {
  _Complex double z;
  z = *(_Complex double *)&x;
};
