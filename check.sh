#!/usr/bin/env bash
#
# Compile every .c file in the repository with the project's warning flags
# and report the result. A file passes only when clang succeeds AND prints
# no warnings, so this verifies the README's "compiles cleanly with
# -Wall -Wextra" promise. Exits non-zero if anything needs attention.
#
# Usage: ./check.sh

set -u

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BOLD='\033[1m'
RESET='\033[0m'

CFLAGS="-Wall -Wextra -fcolor-diagnostics -fsanitize=address,undefined -fstack-protector-strong -O2 -D_FORTIFY_SOURCE=2"
checked=0
failures=0

# Run from the repository root no matter where the script is called from.
cd "$(dirname "$0")"

while IFS= read -r file; do
    checked=$((checked + 1))
    # -o /dev/null: do a full compile but throw the binary away,
    # so no build artifacts are ever left in the repo.
    if output=$(clang $CFLAGS -o /dev/null "$file" 2>&1); then
        if [ -n "$output" ]; then
            printf "${YELLOW}WARN${RESET}  %s\n%s\n" "$file" "$output"
            failures=$((failures + 1))
        else
            printf "${GREEN}OK${RESET}    %s\n" "$file"
        fi
    else
        printf "${RED}FAIL${RESET}  %s\n%s\n" "$file" "$output"
        failures=$((failures + 1))
    fi
done < <(find . -name '*.c' -not -path './.git/*' | sort)

echo
if [ "$failures" -eq 0 ]; then
    printf "${GREEN}${BOLD}All $checked files compile cleanly.${RESET}\n"
else
    printf "${RED}${BOLD}$failures of $checked files need attention.${RESET}\n"
    exit 1
fi
