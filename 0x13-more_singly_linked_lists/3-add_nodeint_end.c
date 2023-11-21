#include "lists.h"

/**
 * add_nodeint_end - It is a function that adds a node
 * at the end of a listint_t list
 * @head: It points to the first element
 * @n: input
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_one;
	listint_t *temp = *head;

	new_one = malloc(sizeof(listint_t));
	if (!new_one)
		return (NULL);

	new_one->n = n;
	new_one->next = NULL;

	if (*head == NULL)
	{
		*head = new_one;
		return (new_one);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_one;

	return (new_one);
}
