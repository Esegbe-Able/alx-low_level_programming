#include "function_pointers.h"
/**
 * int_index - This function searches for an integer.
 * @array:the  array
 * @size: the number of elements in array
 * @cmp: a pointer to the function to be used to compare values
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return(m);
	}
	return (-1);
}
