#!/usr/bin/env bash
set -uo pipefail

cd "$(dirname "$0")/.."

log="$(mktemp)"
trap 'rm -f "$log"' EXIT

./check.sh 2>&1 | tee "$log"
status=${PIPESTATUS[0]}

# Only annotate when something failed and we are actually on a Buildkite agent.
if [ "$status" -ne 0 ] && command -v buildkite-agent >/dev/null 2>&1; then
    # Strip ANSI color codes so the annotation reads cleanly.
    clean="$(sed -r 's/\x1b\[[0-9;]*m//g' "$log")"
    printf '### Compiler reported problems\n\n```\n%s\n```\n' "$clean" \
        | buildkite-agent annotate --style error --context check
fi

exit "$status"
