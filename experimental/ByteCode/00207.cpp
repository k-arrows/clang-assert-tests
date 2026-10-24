// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: DiagnoseUninitializedSubobject
// EXPECT-CRASH-ASSERT: SubObjDecl
// EXPECT-CRASH-ASSERT: declaration

typedef decltype(__builtin_bit_cast(unsigned char[sizeof(nullptr)],
                                    nullptr)) nullptr_t;

static_assert(__builtin_bit_cast(nullptr_t, nullptr) == nullptr);
