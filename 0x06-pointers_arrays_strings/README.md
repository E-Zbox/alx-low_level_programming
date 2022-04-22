# 0x06. C - More pointers, arrays and strings

### More Quiz questions

#### Tasks

## 0. strcat

Write a function that concatenates two strings

**File: `0-strcat.c`**

-   Prototype: `char *_strcat(char *dest, char *src);`
-   This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
-   Returns a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strcat`. Run `man` `strcat` to learn more.

## 1. stncat

**File:`1-strncat.c`**

Write a function that concatenates two strings

-   Prototype: char *\_strncat(char *dest, char \*src, int n);
-   The \_strncat function is similar to the \_strcat function, except that
    -   it will use at most n bytes from src; and
    -   src does not need to be null-terminated if it contains n or more bytes
-   Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

## 7. Mozart composed his music not for the elite, but for everybody

**File: `7-leet.c`**

Write a function that encodes a string into `1337`.

-   Letters `a` and `A` should be replaced by `4`
-   Letters `e` and `E` should be replaced by `3`
-   Letters `o` and `O` should be replaced by `0`
-   Letters `t` and `T` should be replaced by `7`
-   Letters `l` and `L` should be replaced by `1`
-   Prototype: `char *leet(char *);`
-   You can only use one `if` in your code
-   You can only use two loops in your code
-   You are not allowed to use `switch`
-   You are not allowed to use any ternary operation

### And more...

Check out the repo to see various uses of _Arrays_, _Strings_ and _Pointers_
