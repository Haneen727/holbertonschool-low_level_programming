# Simple Calculator

A simple command-line calculator written in C.

## Description
The program prints a welcome line, displays a menu, and lets the user quit by choosing option 0.

## Compilation
gcc -Wall -Werror -Wextra -pedantic calculator.c -o calculator

## Usage
./calculator

## Example
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 0
Bye!

## Number Handling

The calculator uses decimal numbers (double) for all operations, so 10 / 4 gives 2.5.
Dividing by zero prints "Error: division by zero".