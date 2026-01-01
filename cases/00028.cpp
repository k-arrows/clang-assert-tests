// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnFinishCXXInClassMemberInitializer
// EXPECT-CRASH-ASSERT: FD
// EXPECT-CRASH-ASSERT: init 

struct S {};
struct T {
  template <> struct A<> {
  } auto a = v<S>;
}
