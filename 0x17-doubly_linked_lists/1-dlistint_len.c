#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: const dlistint_t *
 *
 * Return: size_t (number of elements in linked list)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	const dlistint_t *node;

	node = h;
	for (count = 0; node != NULL; count++)
		node = node->next;

	return (count);
}
