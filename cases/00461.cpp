// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitPointerTypeLoc
// EXPECT-CRASH-ASSERT: DeclaratorChunk

[[clang::annotate_type("foo")]] int(*_Atomic a);
