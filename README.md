# C Playground

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

## AI assistance

I drive the learning here, with [Claude Code](https://claude.com/claude-code)
helping along the way: it drafts the lesson examples and exercise skeletons
for each topic and reviews my finished solutions, pointing out bugs and
explaining why they happen -- never fixing my code unless I ask. Solving the
exercises, debugging them, and understanding why they work is my job: every
solution in the `exercises/` directories is written by hand.

## Building and running

Each file is a standalone program. Compile any of them with:

```sh
clang -Wall -Wextra -o program 01-basics/01-hello-world.c
./program
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

### Ahead

- [ ] Conditional statements (`if`, `else`, `switch`)
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
