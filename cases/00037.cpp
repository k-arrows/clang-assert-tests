// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkBuiltinTemplateIdType
// EXPECT-CRASH-ASSERT: Converted

template <class T> struct type_identity {
  using type = T;
};

template <class...> struct common_type;

template <class... Args>
using common_type_t = typename common_type<Args...>::type;

template <class... Args>
using common_type_base =
    __builtin_common_type<common_type_t, type_identity, Args...>;
