# 0x14. C - Bit manipulation 💻

### Table of Contents
-	[Learning Objectives](#learning-objectives)
-	[Tasks](#tasks)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

-	Look for the right source of information without too much help
-	How to manipulte **Bits** and use **Bitwise operators**

## Table showing how Bitwise operators work 💻
![bitwise-operators](./screenshots/bitwise.png)

### Tasks

## 0. 0

Write a function that converts a binary number to an `unsigned int`.

-	Prototype: `unsigned int binary_to_uint(const char *b);`
-	where `b` is pointing to a string of `0` and `1` chars
-	Return: the converted number, or 0 if
	-	there is one or more chars in the string `b` that is not `0` or `1`
	-	`b` is `NULL`

**File: `0-binary_to_uint.c`**

## 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

-	Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
-	You are not allowed to use the `%` or `/` operators

**File: `5-flip_bits.c`**

### Feel free to PERUSE through this repository and see why developers use Bitwise concepts to save memory 💻
