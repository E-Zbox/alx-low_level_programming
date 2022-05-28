#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t ** (address of pointer to struct)
 * @index: unsigned int (index of the list where the new node should be added,
 *  index starts at 0)
 * @n: int (new node (n - integer) to be added)
 *
 * Return: listint_t * (address of the new node, or NULL)
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int count;
	listint_t *new_node, *head_copy;

	head_copy = *head;

	for (count = 0; count <= index && (*head_copy).next !=NULL; count++)
	{
		if (count == index)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = head_copy->next;
			return (new_node);
		}

		head_copy = head_copy->next;
	}

	return (NULL);
}
