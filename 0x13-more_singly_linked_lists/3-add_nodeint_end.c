#include "lists.h"

/**
 * create_node - creates a node and returns it
 * @n: int
 *
 * Return: listint_t * (address of the new node or NULL)
 */
listint_t *create_node(int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: listint_t ** (address of a pointer pointing to listint_t)
 * @n: int (new integer node to be added)
 *
 * Return: listint_t * (address of the new element or NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	if (*head == NULL)
	{
		new_node = create_node(n);
		*head = new_node;
	}
	else
	{
		if ((*head)->next == NULL)
		{
			new_node = create_node(n);
			(*head)->next = new_node;
		}
		else
		{
			return (add_nodeint_end(&((*head)->next), n));
		}
	}

	return (new_node);
}
