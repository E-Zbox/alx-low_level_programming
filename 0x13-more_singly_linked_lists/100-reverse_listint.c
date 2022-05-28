#include "lists.h"

/**
 * reverse - reverses a listint_t linked list
 * @head: listint_t **
 * @firstNode: listint_t *
 *
 * Return: listint_t * (pointer to the first node of the reversed list)
 */
listint_t *reverse(listint_t **head, listint_t *firstNode)
{
	printf("1st Node -> %p\n", (void *)firstNode);

	printf("%d, ", (**head).n);

	if ((*head)->next == NULL)
	{
		printf("%p [END]\n", (void *)*head);
		firstNode = *head;
		printf("===== 1st Node [ %p ] =====\n", (void *)firstNode);
		return (firstNode);
	}

	printf("%p\n", (void *)*head);

	return (reverse(&(*head)->next, firstNode));
}
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: listint_t ** (address of pointer to listint_t)
 *
 * Return: listint_t * (pointer to the first node of the reversed list)
 */
listint_t *reverse_listint(listint_t **head)
{
	return (reverse(head, *head));
}
