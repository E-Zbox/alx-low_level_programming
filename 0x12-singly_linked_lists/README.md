# 0x12. C - Singly linked lists

### Table of Contents

-	[Learning Objectives](#learning-objectives)
	-	[General](#general)
-	[Tasks](#tasks)
-	[More Info](#more-info)

## Learning Objectives

At the end of project, you are expected to be able to explain to anyone, without the help of Google

### General

-	When and why using linked lists vs arrays

## Tasks

### More Info

Use the data structure below for the code in this project

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

### Feel free to PERUSE through this repository and try out the various code in the files

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <filename>.c -o <filename>`
