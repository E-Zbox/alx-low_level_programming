#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t *
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h->next == NULL)
	{
		return (count);
	}

	return (list_len(h->next) + count);
}
