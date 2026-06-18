#!/usr/bin/env bash
#
# Compile a single .c file with the project's warning and hardening flags
# and run it right away. The binary goes to a temporary file that is removed
# when the script exits, so no build artifacts are ever left in the repo.
#
# Usage: ./run.sh path/to/file.c [program args...]
#   e.g. ./run.sh 02-conditionals/exercises/06-leap-year.c

set -u

RED='\033[0;31m'
GREEN='\033[0;32m'
BOLD='\033[1m'
RESET='\033[0m'

CFLAGS="-Wall -Wextra -fcolor-diagnostics -fsanitize=address,undefined -fstack-protector-strong -O2 -D_FORTIFY_SOURCE=2"

if [ "$#" -lt 1 ]; then
    printf "${RED}Usage: %s path/to/file.c [program args...]${RESET}\n" "$0" >&2
    exit 1
fi

src="$1"
shift

if [ ! -f "$src" ]; then
    printf "${RED}No such file: %s${RESET}\n" "$src" >&2
    exit 1
fi

bin="$(mktemp)"
# Remove the temporary binary no matter how the script ends.
trap 'rm -f "$bin"' EXIT

printf "${BOLD}Compiling %s${RESET}\n" "$src"
if ! clang $CFLAGS -o "$bin" "$src"; then
    printf "${RED}${BOLD}Compilation failed.${RESET}\n" >&2
    exit 1
fi

printf "${GREEN}${BOLD}Running %s${RESET}\n\n" "$src"
# Any extra arguments are forwarded to the program. The script's exit code
# becomes the program's exit code, since this is the last command.
"$bin" "$@"
