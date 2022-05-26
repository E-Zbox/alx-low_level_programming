#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t *
 *
 * Return: int (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	listint_t *_next __attribute__((unused));

	if (h == NULL)
		return (count);

	printf("%d\n", (*h).n);
	++count;

	if ((*h).next == NULL)
		return (count);

	_next = (*h).next;

	return (count + print_listint(_next));
}
