#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t ** (address of pointer to listint_t)
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if ((*head)->next != NULL)
		free_listint2(&(**head).next);

	free(*head);

	*head = NULL;
}
