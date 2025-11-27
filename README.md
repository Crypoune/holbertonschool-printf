# _printf (Custom printf) — holbertonschool-printf

Brief, educational re-implementation of the standard C `printf` function. The goal is to learn how `printf` works internally by implementing a subset of its features and supporting several common format specifiers.

---

## Table of contents

- About
- Features (supported specifiers)
- Files in this repo
- Build & compile
- Usage examples
- Contributing & style
- Authors

---

## About

This project implements a custom `_printf` function intended to behave similarly to the standard `printf` for a subset of format specifiers. It demonstrates handling variable argument lists (`stdarg.h`), parsing format strings, and writing to standard output.

The implementation is small and intended for learning — not a production replacement for the standard library `printf`.

---

## Features (supported format specifiers)

This repository implements (at least) the following specifiers:

- `%c` — print a single character
- `%s` — print a string (prints `(null)` for NULL pointers)
- `%d` / `%i` — print a signed integer in base 10
- `%%` — print a literal percent sign

These are implemented by functions located in `functions.c` (for example `print_char`, `print_string`, `print_integer` and `print_percent`). Additional parsing/format code lives in `print_format.c` and `_printf.c`.

---

## Files in this repository

- `_printf.c` — main `_printf` entry and dispatcher
- `_putchar.c` — helper to write individual characters
- `functions.c` — implementations of printing for `%c`, `%s`, `%d/%i`, `%%`
- `print_format.c` — format-parsing and helper functions
- `main.c` — example / test harness (may contain sample usage)
- `main.h` — project header with prototypes and includes
- `test/` — tests or test scaffolding

---

## Build & compile

Use the same flags used in the Holberton project environment (GNU89 standard and strict warning flags):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf_test
```

That will produce an executable called `_printf_test` if `main.c` is present and used as a test harness.

---

## Usage examples

Assuming you've compiled the repository into an executable or are linking `_printf` into another program, here are quick examples showing usage and expected output for the supported specifiers:

Example C usage (from `main.c` or your test program):

```c
_printf("Hello %s!\n", "world");
_printf("Character: %c\n", 'A');
_printf("Integer: %d %i\n", 42, -15);
_printf("Percent sign: %%\n");
```

Expected output:

```
Hello world!
Character: A
Integer: 42 -15
Percent sign: %
```

Advice: run your compiled binary (for example `./_printf_test`) to exercise the examples or make your own `main.c` that calls `_printf`.

---

## Contributing & style

- Follow the Holberton/Betty style rules where required.
- Keep files small (<= 5 functions per file) and avoid global variables.
- Use the allowed functions and macros only: `write`, `malloc`, `free`, and `stdarg` helpers (`va_start`, `va_end`, `va_copy`, `va_arg`).

---

## Authors

- Arnaud Messenet — https://github.com/Crypoune
- David Dufont — https://github.com/dufontdd

---

If you'd like the README to include more details (design decisions, tests, or sample outputs for edge cases) tell me which parts you want expanded and I’ll add them next. ✅
