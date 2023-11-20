#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This function's job is to count the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer
 *
 * Return: If the list is not looped - 0.
 * Otherwise - return the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *hare;
	size_t Num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				Num_nodes++;
				tort = tort->next;
				hare = hare->next;
			}

			tort = tort->next;
			while (tort != hare)
			{
				Num_nodes++;
				tort = tort ->next;
			}

			return (Num_nodes);
		}

		tort = tort->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -The function Prints a listint_t list safely.
 * @head: A Pointer.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t Num_nodes, index = 0;

	Num_nodes = looped_listint_len(head);

	if (Num_nodes == 0)
	{
		for (; head != NULL; Num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < Num_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (Num_nodes);
}
