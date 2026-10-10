// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

int strcmp(const char *, const char *);
#define S "\x01\x02"

const union u {
  char c[2];
} str[] = {S[0], S[1]};

const int foo = strcmp((char *)str, (char *)str);
