# syntax=docker/dockerfile:1.7

ARG DEBIAN_CODENAME=bookworm
ARG RUST_VERSION=1.87

############################
# 1) Build LLVM/Clang
############################
FROM --platform=$BUILDPLATFORM debian:${DEBIAN_CODENAME} AS llvm-builder

ARG LLVM_REPO=https://github.com/llvm/llvm-project.git

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    bash \
    ca-certificates \
    git \
    clang \
    cmake \
    libomp-dev \
    ninja-build \
    python3 \
    build-essential \
    curl \
    xz-utils \
    file \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /src

RUN git clone --depth 1 ${LLVM_REPO} llvm-project

WORKDIR /src/llvm-project

RUN cmake -S llvm -B build -G Ninja \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=/opt/llvm \
    -DLLVM_TARGET_TO_BUILD=host \
    -DLLVM_INSTALL_UTILS=ON \
    -DCMAKE_CXX_STANDARD=17 \
    -DLLVM_ENABLE_WERROR=OFF \
    -DBUILD_SHARED_LIBS=ON \
    -DLLVM_ENABLE_ASSERTIONS=ON \
    -DLLVM_ENABLE_LIBCXX=ON \
    '-DLLVM_ENABLE_PROJECTS=llvm;clang;mlir' \
    '-DLLVM_ENABLE_RUNTIMES=openmp' \
    '-DLLVM_LIT_ARGS=-v -vv' \
    -DCMAKE_C_COMPILER=/usr/bin/clang \
    -DCMAKE_CXX_COMPILER=/usr/bin/clang++ \
 && cmake --build build --target install --parallel 8

############################
# 2) Build tree-crasher
############################
FROM --platform=$BUILDPLATFORM rust:${RUST_VERSION}-slim-${DEBIAN_CODENAME} AS treecrasher-builder

ARG TREE_CRASHER_REPO=https://github.com/langston-barrett/tree-crasher.git
ARG TREE_CRASHER_LANG=c

ENV DEBIAN_FRONTEND=noninteractive
ENV CARGO_TERM_COLOR=always

RUN apt-get update && apt-get install -y --no-install-recommends \
    bash \
    ca-certificates \
    git \
    pkg-config \
    clang \
    build-essential \
 && rm -rf /var/lib/apt/lists/*

RUN cargo install --locked --git ${TREE_CRASHER_REPO} tree-crasher-${TREE_CRASHER_LANG}

############################
# 3) Runtime image
############################
FROM debian:${DEBIAN_CODENAME}-slim AS runtime

ARG TREE_CRASHER_LANG=c

ENV DEBIAN_FRONTEND=noninteractive
ENV PATH=/opt/llvm/bin:/usr/local/bin:${PATH}
ENV LLVM_SYMBOLIZER_PATH=/opt/llvm/bin/llvm-symbolizer
ENV ASAN_SYMBOLIZER_PATH=/opt/llvm/bin/llvm-symbolizer

RUN apt-get update && apt-get install -y --no-install-recommends \
    bash \
    ca-certificates \
    git \
    libomp-dev \
    python3 \
    python3-yaml \
    file \
    procps \
    coreutils \
    vim \
    build-essential \
 && rm -rf /var/lib/apt/lists/*

COPY --from=llvm-builder /opt/llvm /opt/llvm
COPY --from=llvm-builder /src/llvm-project/clang/test /corpus/clang-test
COPY --from=treecrasher-builder /usr/local/cargo/bin/tree-crasher-${TREE_CRASHER_LANG} /usr/local/bin/tree-crasher

CMD ["/bin/bash"]
