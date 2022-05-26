#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: listint_t *
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	++ count;

	if ((*h).next == NULL)
		return (count);

	return (count + listint_len((*h).next));
}
