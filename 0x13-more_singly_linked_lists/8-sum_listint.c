#include "lists.h"

/**
 * sum_listint -It is a function that calculates the
 * sum of all the data in a listint_t list
 * @head: first node in the listint_t list
 * Return: summation
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *temp = head;

	while (temp)
	{
		summation += temp->n;
		temp = temp->next;
	}

	return (summation);
}
