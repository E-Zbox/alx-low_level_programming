#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: listint_t *
 * @index: int (index of the node, starting at 0)
 *
 * Return: listint_t * or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target_node __attribute__((unused));
	unsigned int count = 0;

	target_node = head;

	for (; (target_node->next != NULL); count++)
	{
		if (count == index)
			return (target_node);

		target_node = target_node->next;
	}

	if (target_node->next == NULL)
	{
		if (index == count)
			return (target_node);
	}

	return (NULL);
}
