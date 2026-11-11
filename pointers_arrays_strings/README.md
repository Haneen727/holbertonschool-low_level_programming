# C - Pointers, arrays and strings

This directory contains exercises about pointers, arrays and strings in C.

## Tasks

### 0. 98 Battery st.
- **File:** `0-reset_to_98.c`
- Writes a function that takes a pointer to an `int` as a parameter and updates the value it points to to `98`.
- **Prototype:** `void reset_to_98(int *n);`

### 1. Don't swap horses in crossing a stream
- **File:** `1-swap.c`
- Writes a function that swaps the values of two integers.
- **Prototype:** `void swap_int(int *a, int *b);`

### 2. This report, by its very length, defends itself against the risk of being read
- **File:** `2-strlen.c`
- Writes a function that returns the length of a string.
- **Prototype:** `int _strlen(char *s);`

### 3. I do not fear computers. I fear the lack of them
- **File:** `3-puts.c`
- Writes a function that prints a string, followed by a new line, to stdout.
- **Prototype:** `void _puts(char *str);`

### 4. I can only go one way. I've not got a reverse gear
- **File:** `4-print_rev.c`
- Writes a function that prints a string, in reverse, followed by a new line.
- **Prototype:** `void print_rev(char *s);`

## Compilation

All files are compiled on Ubuntu 20.04 LTS using `gcc` with the flags:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89

## Style

Code follows the Betty style guide (checked with `betty-style.pl` and `betty-doc.pl`).

## Author

Haneen
