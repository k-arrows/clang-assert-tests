// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildUsingDeclaration
// EXPECT-CRASH-ASSERT: IdentLoc
// EXPECT-CRASH-ASSERT: TargetName

struct S {
  using t = bool*;
  operator bool*();
};

template<typename... Bases>
struct C : private Bases... {
  using Bases::operator typename Bases::foo...;
};

C<S> c;
