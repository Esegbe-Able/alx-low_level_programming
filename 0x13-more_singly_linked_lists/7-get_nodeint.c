#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the node at a certain index in a linked list
 * @head: first node
 * @index: index of the node to return
 * Return: pointer to the node we need, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}