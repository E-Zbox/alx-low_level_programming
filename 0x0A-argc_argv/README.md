# 0X0A. C - argc, argv

### Table of Contents

-   [Learning Objectives](#learning-objectives)
    -   [General](#general)
-   [Tasks](#tasks)

### Learning Objectives

At the end of this project, you are expected to be able to` explain to anyone`, without the help of Google

### General

-   How to use arguments passed to your program
-   What are two prototypes of `main` that you know of, and in which case do you use one or the other
-   How to use `**attribute**((unused))` or `(void)` to compile functions with unused variables or parameters

### Tasks

## 0. It ain't what they call you, it's what you answer to 🤙

_File: `0-whatsmyname.c`_

Write a program that prints its name, followed by a new line.

-   If you rename the program, it will print the new name, without having to compile it again
-   You should not remove the path before the name of the program

## 1. Silence is argument carried 🚇 out by other means

_File: `1-args.c`_

Write a program that prints the number of arguments passed into it.

-   Your program should print a number followed by a new line

## 4. To infinity ♾ and beyond🌌

_File: `4-add.c`_

Write a program that adds positive numbers.

-   Print the result, followed by a new line
-   If no number is passed to the program, print `0`, followed by a new line
-   If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
-   You can assume that numbers and the addition of all the numbers can be stored in an `int`

To run this code copy-paste the linux commands below

```s
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
```

### Peruse through this repository and run the various C programs.

_Nobody_:

![dennisRitchie - unix_simplicity](./screenshots/dennisRitchie%20-%20unix_simplicity.png)

_mazi Eben_ 👨🥼: I am that **genius**
