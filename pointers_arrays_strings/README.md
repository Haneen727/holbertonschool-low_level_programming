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

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
- **File:** `5-rev_string.c`
- Writes a function that reverses a string.
- **Prototype:** `void rev_string(char *s);`

### 6. Half the lies they tell about me aren't true
- **File:** `6-puts2.c`
- Writes a function that prints every other character of a string, starting with the first character, followed by a new line.
- **Prototype:** `void puts2(char *str);`

### 7. Winning is only half of it. Having fun is the other half
- **File:** `7-puts_half.c`
- Writes a function that prints half of a string, followed by a new line.
- **Prototype:** `void puts_half(char *str);`

### 8. Arrays are not pointers
- **File:** `8-print_array.c`
- Writes a function that prints n elements of an array of integers, followed by a new line.
- **Prototype:** `void print_array(int *a, int n);`

### 9. strcpy
- **File:** `9-strcpy.c`
- Writes a function that copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest.
- **Prototype:** `char *_strcpy(char *dest, char *src);`

## Compilation

All files are compiled on Ubuntu 20.04 LTS using `gcc` with the flags:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89

## Style

Code follows the Betty style guide (checked with `betty-style.pl` and `betty-doc.pl`).

## Author

Haneen
