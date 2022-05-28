#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list
 * @head: listint_t ** (address of pointer to listint_t)
 * @index: unsigned int
 *
 * Return: int (1 if it succeeded, -1 if it failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned count;
	listint_t *current, *subsequent;

	if (!head || !(*head))
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (**head).next;
		free(current);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		current = (**head).next;
		if (current == NULL)
			return (-1);
	}

	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);

	return (1);
}
