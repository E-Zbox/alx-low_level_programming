#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: listint_t *
 *
 * Return: size_t (Returns the number of nodes in the list,
 * if the function fails, exit the program with status (98))
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
	{
		printf("-> [%p] 98\n", head);
		exit (98);
	}

	printf("[%p] %d\n", head (*head).n);

	return (1 + print_listint_safe((**head).next));
}
