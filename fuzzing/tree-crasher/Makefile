TARGET := .
IMAGE_NAME := llvm-fuzz
IMAGE_TAG := latest
CONTAINER_NAME := $(subst /,-,$(IMAGE_NAME))-$(subst .,,$(IMAGE_TAG))
ROOT_DIR := $(shell readlink -f ${PWD}/../../)

.PHONY: build run clean fuzz check

build:
	docker build \
		--build-arg http_proxy=${http_proxy} \
		--build-arg https_proxy=${https_proxy} \
		-t $(IMAGE_NAME):$(IMAGE_TAG) \
		$(TARGET)

run: _run

_run:
	docker run \
		-it \
		--rm \
		--privileged \
		--ipc=host \
		--network host \
		--cap-add=SYS_PTRACE \
		--ulimit memlock=-1 \
		--ulimit stack=67108864 \
		--security-opt seccomp=unconfined \
		--name $(CONTAINER_NAME) \
		-e http_proxy=${http_proxy} \
		-e https_proxy=${https_proxy} \
		-e HTTP_PROXY=${HTTP_PROXY} \
		-e HTTPS_PROXY=${HTTPS_PROXY} \
		-h $(CONTAINER_NAME) \
		-v ${ROOT_DIR}:${ROOT_DIR} \
		-w ${PWD} \
		$(IMAGE_NAME):$(IMAGE_TAG) \
		bash

clean:
	rm -rf corpus logs tree-crasher* result.txt

fuzz:
	python3 fuzz.py

check:
	grep -r 'Assertion.*failed\.' logs/ | \
		sed 's/.*\(Assertion.*failed\.\)/\1/' > result.txt
	grep -Fxv -f ../../logs/assertions_list.txt result.txt || true
