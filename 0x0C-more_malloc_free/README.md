# 0x0C. C - More malloc, free

### Table of Contents

-   [Learning Objectives](#learning-objectives)
    -   [General](#general)
-   [Tasks](#tasks)

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

-   How to use the exit function
-   What are the functions calloc and realloc from the standard library and how to use them

### Tasks

## 0. Trust no one 1️⃣🧬

Write a function that allocates memory using `malloc`.

_File: `0-malloc_checked.c`_

-   Prototype: `void \*malloc_checked(unsigned int b);`
-   Returns a pointer to the allocated memory
-   if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`

## 3. array_range 🏹

Write a function that creates an array of integers

_File: `3-array_range.c`_

-   Prototype: `int *array_range(int min, int max);`
-   The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
-   Return: the pointer to the newly created array
-   If `min` > `max`, return `NULL`
-   If `malloc` fails, return `NULL`

### Feel free to PERUSE through this repository and see the beauty of malloc a.k.a memory allocation 💪💪
