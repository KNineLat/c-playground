# C data types

A reference for the basic types used in this playground. Sizes below are
typical for a modern 64-bit Linux system; the C standard only guarantees
minimums, so use `sizeof(type)` when it matters.

## Integer types

| Type        | Typical size | Typical range                  | printf |
|-------------|--------------|--------------------------------|--------|
| `char`      | 1 byte       | -128 to 127                    | `%c`   |
| `short`     | 2 bytes      | about ±32 thousand             | `%hd`  |
| `int`       | 4 bytes      | about ±2.1 billion             | `%d`   |
| `long`      | 8 bytes      | about ±9.2 quintillion         | `%ld`  |
| `long long` | 8 bytes      | same as `long` on this system  | `%lld` |

Each integer type has an `unsigned` variant that cannot be negative but
doubles the positive range, e.g. `unsigned int` goes from 0 to about
4.3 billion and prints with `%u`.

Key facts:

- `int` is the default choice for whole numbers.
- Integer division truncates: `7 / 2` is `3`, not `3.5`.
- Overflow wraps around or misbehaves silently -- C does not warn you at
  runtime when a value no longer fits.
- `char` is "a very small integer". `'W'` is just the number 87 (its ASCII
  code), which is why you can compare and do arithmetic with chars.

## Floating-point types

| Type     | Typical size | Precision            | printf | scanf  |
|----------|--------------|----------------------|--------|--------|
| `float`  | 4 bytes      | ~6-7 decimal digits  | `%f`   | `%f`   |
| `double` | 8 bytes      | ~15-16 decimal digits| `%f`   | `%lf`  |

Key facts:

- `double` is the default in C: a literal like `3.22` is a `double`;
  write `3.22f` for a `float`.
- Floating-point values are approximations. `0.1 + 0.2 == 0.3` is false,
  so never compare floats with `==` -- check if the difference is tiny
  instead.
- `%.2f` changes only how a value is printed, not how it is stored.

## Booleans

C has no built-in `true`/`false` keyword in old code: any non-zero value
is "true" and `0` is "false". Comparison operators like `==` actually
return an `int` that is `1` or `0`.

Since C99 you can `#include <stdbool.h>` and use the `bool` type with
`true` and `false` -- prefer that for readability.

## Type conversion and casting

- Implicit: mixing types converts the "smaller" one automatically, e.g.
  `int + float` becomes `float + float`.
- Explicit (cast): `(float) total / count` -- converts `total` *before*
  the division, so the result keeps the fraction.
- Careful: `(float)(total / count)` casts *after* an integer division has
  already truncated -- the fraction is lost.

## Quick format-specifier cheat sheet

```c
printf("%d",  some_int);       // int
printf("%u",  some_unsigned);  // unsigned int
printf("%ld", some_long);      // long
printf("%f",  some_float);     // float or double
printf("%.2f", some_float);    // two decimal places
printf("%c",  some_char);      // single character
printf("%s",  some_string);    // string (later lessons)
printf("%%");                  // a literal percent sign
```

For `scanf`, remember the `&` before the variable name and use `%f` for
`float` but `%lf` for `double`.
