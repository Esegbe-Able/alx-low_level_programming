#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list
 * @head: double pointer
 * @str: The new string that will be added
 * Return: the & of the new input
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

		while (str[length])
			length++;
		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);
		new->str = strdup(str);
		new->len = length;
		new->next = (*head);
		(*head) = new;

		return (*head);
}
