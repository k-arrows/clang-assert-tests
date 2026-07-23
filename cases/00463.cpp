// RUN: clang++ -std=c++20 %s
// EXPECT-CRASH-ASSERT: ActOnAnnotModuleEnd
// EXPECT-CRASH-ASSERT: getMainFileID
// EXPECT-CRASH-ASSERT: submodule

#pragma clang module build M
module M { module C {} }
#pragma clang module contents

#pragma clang module begin M.C
foo
