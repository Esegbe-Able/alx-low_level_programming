#include "lists.h"

/**
 * free_listint2 - This function is meant to free linked list(listnt_t)
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
