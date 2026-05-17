// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deref
// EXPECT-CRASH-ASSERT: isDereferencable

typedef struct {
} S;

void foo() {
  S *s = (S *)malloc(sizeof(*s));
  S *&sref = s;
  for (int i = 0; i < 2; sref++)
    ;
}
