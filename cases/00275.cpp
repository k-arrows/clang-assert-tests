// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPDeclareMapperType
// EXPECT-CRASH-ASSERT: ParsedType
// EXPECT-CRASH-ASSERT: Expect

template <class T> class D {
public:
  class V {
    int vec[] = {1, 2};
  };
#pragma omp declare mapper(id : V v) map(v.in)
};

#pragma omp declare mapper(D<double> d) map(to : d.d)
