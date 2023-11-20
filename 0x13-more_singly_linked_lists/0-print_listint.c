#include "lists.h"
/**
 * print_listint - prints every elements of a listint_t list.
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

		for (; h; h = h->next)
		{
			printf("%d\n", h->n);
			number++;
		}
	return (number);
}
