#include <stdio.h>
#include "lists.h"

/**
 * recursive_print - prints all elements of a list_t list in a recursive manner
 * @h: list_t *
 *
 * Return: int
 */
int recursive_print(const list_t *h)
{
	int count = 1;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (recursive_print(h->next) + count);
	}

	printf("[%d] %s\n", h->len, h->str);

	if (h->next == NULL)
	{
		return (count);
	}

	return (recursive_print(h->next) + count);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: const list_t * (pointer to list_t)
 *
 * Return: int (number of nodes)
 */
size_t print_list(const list_t *h)
{
	int count __attribute__((unused)) = 0;

	count = recursive_print(h);

	return (count);
}
