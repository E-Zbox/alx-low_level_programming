#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: const dlistint_t *
 *
 * Return: size_t (number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *node;

	node = h;

	for (count = 0; node != NULL; count++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}

	return (count);
}
