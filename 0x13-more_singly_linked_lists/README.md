# 0x13. C - More singly linked lists

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone without the help of Google:

-   How to use linked lists
-   Start to look for the right source of information without too much help

### More Info

The data structure below was used in the project

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

**Feel free to PERUSE through this repository and try implementing with your function**

Compile code with `gcc` and `-Wall`, `-Werror`, `-Wextra`, `-pedantic` and `-std=gnu89` flags
