#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: listint_t * (pointer to struct (listint_t))
 *
 * Return: listint_t * (address of the node where the loop starts,
 * or NULL if there is no loop)
 */
listint_t *find_listint_loop(listint *head)
{
	if (head == NULL)
		return (NULL);

	if ((*head).next == NULL)
		return (head);

	return (find_listint_loop(head->next));
}
