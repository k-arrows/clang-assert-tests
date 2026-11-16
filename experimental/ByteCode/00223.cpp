// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getDescriptor
// EXPECT-CRASH-ASSERT: InlineDescriptor

template <bool B> struct RB {
  constexpr RB(const char *in) {
    s = __builtin_strlen(in);
    d = new char[foo + 1];
    for (int i = 0; i < s; i++)
      d[i] = in[i];
  }
  int s;
  char *d;
  constexpr unsigned long size() const { return s; }
  constexpr char *data() const { return d; }
};

using RL = RB<true>;

void bar() { asm((RL("nop"))); }
