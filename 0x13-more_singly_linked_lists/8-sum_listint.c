#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: listint_t *
 *
 * Return: int (sum of all the data (n))
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	if ((*head).next == NULL)
		return (head->n);

	return ((*head).n + sum_listint((*head).next));
}
