#ifndef LISTS
#define LISTS

/**
 * struct list_s - singly linked list
 * @str: char * (malloc'ed string)
 * @len: int (length of the string)
 * @next: list_s * (points to the next node)
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

#endif
