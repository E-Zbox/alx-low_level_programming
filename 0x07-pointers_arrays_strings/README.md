## 0x07.C - Even more pointers, arrays and strings

### Table of Contents

-   [Learning Objectives](#learning-objectives)
    -   [General](#general)
-   [Tasks](#tasks)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, **without the help of Google**:

### General

-   What are pointers to pointers and how to use them
-   What are multidimensional arrays and how to use them
-   What are the most common C standard library functions to manipulate strings

### Tasks

## 0. memset

Write a function that fills memory with a constant byte

_File: `0-memset.c`_

-   Prototype: `char *_memset(char *s, char b, unsigned int n)`;
-   The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte b
-   Returns a pointer to the memory area s

**FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more**.

## 2. strchr

Write a function that locates a character in a string.

_File: `2-strchr.c`_

-   Prototype: `char *_strchr(char *s, char c)`;
-   Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

**FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.**

## 7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

_File: `8-print_diagsums.c`_

-   Prototype: `void print_diagsums(int *a, int size)`;
-   Format: see example
-   You are allowed to use the standard library
    Note that in the following example we are casting an` int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

### *PERUSE through this repository to see the tasty*😋🍝 _C programs developed by_ maziEben 🥂🚀🚀🔥
