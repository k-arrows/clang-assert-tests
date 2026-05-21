import random
import shutil
import subprocess
import yaml
from pathlib import Path
from datetime import datetime
import multiprocessing


def load_config(path):
    with open(path, "r") as f:
        return yaml.safe_load(f)


def clean_directory(path):
    p = Path(path)

    if p.exists():
        shutil.rmtree(p)

    p.mkdir(parents=True, exist_ok=True)


def collect_files(src_dir, extension, recursive):
    src_path = Path(src_dir)

    if recursive:
        return list(src_path.rglob(f"*{extension}"))
    else:
        return list(src_path.glob(f"*{extension}"))


def generate_corpus(cfg):
    src = cfg["source_directory"]
    dst = cfg["destination_directory"]
    extensions = cfg["extensions"]
    k = cfg["number_to_select"]
    recursive = cfg.get("recursive", True)
    seed = cfg.get("seed")

    if seed is not None:
        random.seed(seed)

    chosen_ext = random.choice(extensions)
    print(f"[+] Chosen extension: {chosen_ext}")

    files = collect_files(src, chosen_ext, recursive)

    if len(files) < k:
        raise ValueError("Not enough files")

    selected = random.sample(files, k)

    clean_directory(dst)

    for i, f in enumerate(selected):
        new_name = f"{i:05d}_{f.name}"
        shutil.copy2(f, Path(dst) / new_name)

    print(f"[+] Copied {k} files to {dst}")

    return chosen_ext


def create_log_file(log_dir, idx):
    Path(log_dir).mkdir(parents=True, exist_ok=True)

    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    log_path = Path(log_dir) / f"fuzz_{timestamp}_{idx:02d}.log"

    return log_path


def run_fuzzer(cfg, extension, log_path):
    binary = cfg["binary"]
    corpus_dir = cfg["corpus_dir"]
    debug = cfg["debug"]
    interesting = cfg["interesting_stderr"]
    compiler_cmd = cfg["compiler_cmd"]
    timeout = cfg.get("timeout_seconds")
    show_stdout = cfg.get("show_stdout", False)

    input_token = f"@@{extension}"

    cmd = [
        binary,
        corpus_dir,
        debug,
        "--interesting-stderr",
        interesting,
        "--",
        *compiler_cmd,
        input_token
    ]

    print("[+] Running fuzzer:")
    print(" ".join(cmd))
    print(f"[+] Log file: {log_path}")

    with open(log_path, "w") as log_file:
        try:
            if show_stdout:
                process = subprocess.Popen(
                    cmd,
                    stdout=subprocess.PIPE,
                    stderr=subprocess.STDOUT,
                    text=True
                )
                for line in process.stdout:
                    print(line, end='')
                    log_file.write(line)
                process.wait(timeout=timeout)
            else:
                process = subprocess.Popen(
                    cmd,
                    stdout=log_file,
                    stderr=subprocess.STDOUT,
                    text=True
                )
                process.wait(timeout=timeout)

        except subprocess.TimeoutExpired:
            process.kill()
            log_file.write("\n[!] TIMEOUT reached\n")
            if show_stdout:
                print("[!] Fuzzer timeout reached")


def run_fuzzer_instance(cfg, extension, log_dir, idx):
    log_path = create_log_file(log_dir, idx)
    run_fuzzer(cfg, extension, log_path)


def run_parallel_fuzzers(cfg, extension, log_dir):
    parallel = cfg.get("parallel", 1)

    print(f"[+] Starting {parallel} parallel fuzzers")

    processes = []

    for i in range(parallel):
        p = multiprocessing.Process(
            target=run_fuzzer_instance,
            args=(cfg, extension, log_dir, i)
        )
        p.start()
        processes.append(p)

    for p in processes:
        p.join()


def main():
    config = load_config("config.yaml")

    ext = generate_corpus(config["corpus"])

    log_dir = config["logging"]["log_directory"]

    run_parallel_fuzzers(config["fuzzer"], ext, log_dir)


if __name__ == "__main__":
    main()
