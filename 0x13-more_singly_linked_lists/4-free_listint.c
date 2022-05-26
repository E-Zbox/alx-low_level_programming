#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t *
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);

		if ((*head).next != NULL)
			free_listint((*head).next);
	}
}
