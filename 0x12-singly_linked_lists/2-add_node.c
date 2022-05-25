#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: list ** (address)
 * @str: char *
 * 
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	/** list_t *temp = *head; */
	size_t len_str = 0;
	char *str_dup = strdup(str);

	if (new_node != NULL)
	{
		while (str[len_str])
			len_str++;

		new_node->str = str_dup;
		new_node->len = len_str;
		new_node->next = *head;

		*head = new_node;
	}

	else 
		return (NULL);

	return (*head);
}
