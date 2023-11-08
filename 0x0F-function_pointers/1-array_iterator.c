#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that prints each array element
 * @array: the array
 * @size: the number of element to be  print
 * @action: pointer to print in hexadecimal
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k< size; k++)
	{
		action(array[k]);
	}
}
