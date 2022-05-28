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
		while (head->next != NULL)
		{
			free(head);
			head = head->next;

			/**
			if ((*head).next != NULL)
				free_listint((*head).next);
				*/
		}
	}
}
