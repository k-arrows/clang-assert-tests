// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: operator[]
// EXPECT-CRASH-ASSERT: idx
	
template <typename... Args>
__attribute__((format(printf, 1, 17)))
void foo(const char *fmt, Args &&...args);

void bar() { foo("%f", 123.f); }
