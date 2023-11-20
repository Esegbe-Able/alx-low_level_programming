#include "lists.h"

/**
 * insert_nodeint_at_index - It is a function that inserts a new node in a linked list
 * at a given position
 * @head: pointer 
 * @idx: index where the new node is added
 * @n: data to be inserted into the new node
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_one;
	listint_t *temp = *head;

	new_one = malloc(sizeof(listint_t));
	if (!new_one || !head)
		return (NULL);

	new_one->n = n;
	new_one->next = NULL;

	if (idx == 0)
	{
		new_one->next = *head;
		*head = new_one;
		return (new_one);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_one->next = temp->next;
			temp->next = new_one;
			return (new_one);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
