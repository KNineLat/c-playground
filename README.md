# C Playground

A personal learning repository documenting my journey through the C programming
language, one small program at a time. Every file here was written by hand while
working through the fundamentals -- no copy-paste shortcuts, plenty of wolves.

## Repository layout

```
basics/                 Core lessons, numbered in learning order
basics/exercises/       Practice exercises reinforcing each lesson
```

Files follow a simple convention: a two-digit number reflecting the order in
which they were written, followed by a short kebab-case description, e.g.
`03-scanf-input.c`. Compiled binaries are never committed.

## Building and running

Each file is a standalone program. Compile any of them with:

```sh
gcc -Wall -Wextra -std=c11 -o program basics/01-hello-world.c
./program
```

All programs in this repository compile cleanly with `-Wall -Wextra`.

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
