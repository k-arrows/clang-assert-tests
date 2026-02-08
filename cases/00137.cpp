// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getParamDecl
// EXPECT-CRASH-ASSERT: getNumParams
// EXPECT-CRASH-ASSERT: Illegal

namespace std {
template <class T> struct type_identity {};
} // namespace std

struct S {
  template <class T> void operator delete(std::type_identity<T>);
};
