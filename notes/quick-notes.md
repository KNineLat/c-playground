# Quick notes

A scratchpad for my own reasoning, gotchas, reminders, and "don't trip on
this again" notes, in whatever order they come to me. No structure required;
just dump and keep moving. Promote anything that grows up into its own notes
file later.

## Printing & formatting

- Two decimals is `%.2f`, NOT `0.2f`. The `0` belongs to width/padding, the
  `.2` is the precision.
- Literal percent sign is `%%`.

## scanf

- Needs the address: `scanf("%d", &x)` -- the `&` is easy to forget.
- Always check the return value: `if (scanf(...) != 1) { ... }` catches bad
  input instead of running on garbage.
- Use `" %c"` (leading space) when reading a single char, so a leftover
  newline doesn't get read as the answer.
- `double` reads with `%lf`, but prints with `%f`.

## Loops & arithmetic

- Accumulator start value matters: sum starts at `0`, product starts at `1`.
- min/max: seed from the FIRST value read, not `0`.
- Integer division truncates (`7 / 2 == 3`); cast one side to `float` for a
  fractional result.

## ...
