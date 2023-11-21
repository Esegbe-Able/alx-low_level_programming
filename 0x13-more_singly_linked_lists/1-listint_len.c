#include "lists.h"

/**
 * listint_len - Is a function that returns the
 * number of elements in a linked  list
 * @h: pointer
 * Return: number  of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	for (; h; h = h->next)
	{
		number++;
	}
	return (number);
}
