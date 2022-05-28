#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @h: listint_t ** (address of pointer to listint_t)
 *
 * Return: size_t (size of the list that was free'd
 * and sets (head) to (NULL)
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;

	while ((*h) != NULL)
	{
		free(*h);
		*h = (*h)->next;
		count++;
	}

	*h = NULL;

	return (count);
}
