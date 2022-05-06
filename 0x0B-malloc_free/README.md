# 0x0B. C - malloc, free

### Table of Contents

-   [Learning Objectives](#learning-objectives)
    -   [General](#general)
-   [Word](#mazi-speaks)
-   [Tasks](#tasks)

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

What is the difference between automatic and dynamic allocation
What is malloc and free and how to use them
Why and when use malloc
How to use valgrind to check for memory leak

_A word from maziEben_ 👨‍🔬🥼

**Our loyal friends computers have endured a sad reality which is**

![computers_are_sad](./screenshots/computer_has_memory_no_imagination.png)

### Tasks

## 0. Float like a butterfly 🦋, sting like a bee 🐝

_File: `0-create_array.c`_

Write a function that creates an array of chars, and initializes it with a specific char.

-   Prototype: `char *create_array(unsigned int size, char c);`
-   Returns `NULL` if size = `0`
-   Returns a pointer to the array, or `NULL` if it fails

## 1. The woman 🙍‍♀️ who has no imagination has no wings 💸

_File: `1-strdup.c`_

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

-   Prototype: `char *_strdup(char *str);`
-   The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str. `Memory for the new string is obtained with `malloc`, and can be freed with `free`.
-   Returns `NULL` if str = NULL
-   On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

## 4. It's not bragging if you can back it up 💪

_File: `4-free_grid.c`_

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

-   Prototype: `void free_grid(int **grid, int height);`
-   Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

### Peruse through this repo and appreciate the beauty ✨❇ that memory allocation brings about
