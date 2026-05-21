// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EmitCXXNewExpr
// EXPECT-CRASH-ASSERT: hasSameUnqualifiedType
// EXPECT-CRASH-ASSERT: alignment

namespace std {
template <class T> struct type_identity {};
#define TI(T) std::type_identity<T>
using size_t = __SIZE_TYPE__;
enum class align_val_t : long {};
} // namespace std

template <class T> void *operator new(TI(T), std::size_t, std::align_val_t);
template <class T>
void operator delete(TI(T), void *, std::size_t, std::align_val_t);

struct S {};

void foo() { S *s = new S; }
