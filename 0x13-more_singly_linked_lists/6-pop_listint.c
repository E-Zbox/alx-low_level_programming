#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: listint_t ** (address of pointer to listint_t)
 *
 * Return: int (integer (n) of deleted head node)
 */
int pop_listint(listint_t **head)
{
	int deleted_head_n __attribute__((unused));
	listint_t *temp;

	if (*head == NULL)
		return (0);

	deleted_head_n = (*head)->n;

	temp = *head;

	*head = (**head).next;

	free(temp);

	return (deleted_head_n);
}
