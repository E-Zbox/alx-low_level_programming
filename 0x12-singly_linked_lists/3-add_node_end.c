#include "lists.h"

/**
 * add_node_end - this adds a new node at the end of a list_t list
 * @head: list_t **
 * @str: char *
 *
 * Return: list * (address of new node or NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t len_str;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (len_str = 0; str[len_str]; len_str++)
		;

	new_node->len = len_str;
	new_node->next = NULL;
	temp_node = *head;

	if (temp_node == NULL)
		*head = new_node;
	else
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;

		temp_node->next = new_node;
	}

	return (*head);
}
