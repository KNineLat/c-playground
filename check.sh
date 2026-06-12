#!/usr/bin/env bash
#
# Compile every .c file in the repository with the project's warning flags
# and report the result. A file passes only when gcc succeeds AND prints
# no warnings, so this verifies the README's "compiles cleanly with
# -Wall -Wextra" promise. Exits non-zero if anything needs attention.
#
# Usage: ./check.sh

set -u

CFLAGS="-Wall -Wextra -std=c11"
checked=0
failures=0

# Run from the repository root no matter where the script is called from.
cd "$(dirname "$0")"

while IFS= read -r file; do
    checked=$((checked + 1))
    # -o /dev/null: do a full compile but throw the binary away,
    # so no build artifacts are ever left in the repo.
    if output=$(gcc $CFLAGS -o /dev/null "$file" 2>&1); then
        if [ -n "$output" ]; then
            printf 'WARN  %s\n%s\n' "$file" "$output"
            failures=$((failures + 1))
        else
            printf 'OK    %s\n' "$file"
        fi
    else
        printf 'FAIL  %s\n%s\n' "$file" "$output"
        failures=$((failures + 1))
    fi
done < <(find . -name '*.c' -not -path './.git/*' | sort)

echo
if [ "$failures" -eq 0 ]; then
    echo "All $checked files compile cleanly."
else
    echo "$failures of $checked files need attention."
    exit 1
fi
