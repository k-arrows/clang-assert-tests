// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitConvertVectorExpr
// EXPECT-CRASH-ASSERT: Initializing

typedef float __m128 __attribute__((__vector_size__(16), __aligned__(16)));
typedef double __m128d __attribute__((__vector_size__(16), __aligned__(16)));
typedef double __v2df __attribute__((__vector_size__(16)));

static inline constexpr __m128d _mm_cvtps_pd(__m128 __a) {
  /* return */ __builtin_convertvector(__builtin_shufflevector(__a, __a, 0, 1),
                                       __v2df);
}

constexpr __m128 kf1{-1.0f, 2.0f, -3.0f, 4.0f};
constexpr __m128d v_mm_cvtps_pd = _mm_cvtps_pd(kf1);
