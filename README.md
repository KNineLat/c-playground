# C Playground

[![Build status](https://badge.buildkite.com/325acd0f1d7a327764afeeee85b37ec209cb3e1a803333a410.svg)](https://buildkite.com/mateusz-1/c-playground)

A personal learning repository documenting my journey through the C programming
language, one small program at a time. Every solution here was written by hand
while working through the fundamentals -- no copy-paste shortcuts, plenty of
wolves.

## Repository layout

```
01-basics/              One numbered folder per topic, in learning order
02-conditionals/        ...next topics get the next number (03-loops/, ...)
notes/                  Reference notes (data types, cheat sheets)
```

Inside each topic folder, the top-level `.c` files are lessons and worked
examples, and `exercises/` holds the practice tasks solved by hand. Files
follow a simple convention: a two-digit number reflecting learning order,
followed by a short kebab-case description, e.g. `03-scanf-input.c`.
Compiled binaries are never committed.

## Tools

AI coding assistants help draft lesson examples and review solutions, but all
exercise code is written by hand.

## Building and running

Each file is a standalone program. Compile any of them with:

```sh
clang -Wall -Wextra -fsanitize=address,undefined -fstack-protector-strong -O2 -D_FORTIFY_SOURCE=2 -o program 01-basics/01-hello-world.c
./program
```

To compile and run a single file in one step with those same flags, use the
`run.sh` wrapper. It builds the file to a temporary binary, runs it, and
removes the binary afterwards (any extra arguments are passed to the program):

```sh
./run.sh 01-basics/01-hello-world.c
```

All programs in this repository compile cleanly with `-Wall -Wextra`. To
verify that promise for every file at once, run the check script from the
repository root:

```sh
./check.sh
```

It compiles each `.c` file (discarding the binaries) and fails if any file
produces an error or a warning.

## Milestones

### Reached

- [x] First compiled and running C program
- [x] Basic data types and `printf` format specifiers
- [x] Reading user input with `scanf`
- [x] Integer vs. float division and explicit casting
- [x] First self-contained mini exam passed (howl average)
- [x] Conditional statements (`if`, `else`, `switch`)

### Ahead

- [ ] Loops (`while`, `for`, `do-while`)
- [ ] Functions: declarations, parameters, return values
- [ ] Arrays and strings
- [ ] Pointers and pointer arithmetic
- [ ] Structs and custom types
- [ ] Dynamic memory (`malloc`, `free`)
- [ ] File input and output
- [ ] A first multi-file project with a Makefile

## Notes to self

- Division of two integers truncates; cast one operand to `float` or use a
  float literal (`3.0f`) when a fractional result matters.
- `scanf` needs the address of the variable (`&x`), except for arrays.
- `%.2f` controls how a value is printed, not how it is stored.
