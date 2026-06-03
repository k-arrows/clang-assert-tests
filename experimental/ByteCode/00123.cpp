// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: classifyVectorElementType
// EXPECT-CRASH-ASSERT: isVectorType

typedef float __m128 __attribute__((__vector_size__(16)));

static inline constexpr __m128 _mm_cvtps_pd(__m128 z) {
  __builtin_convertvector(__builtin_shufflevector(z, z), __m128);
}

constexpr __m128 kf1{1.0f, 2.0f, 3.0f, 4.0f};
constexpr __m128 v_mm_cvtps_pd = _mm_cvtps_pd(kf1);
