#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int k, cap;

	if (min > max)
		return (NULL);

	cap = max - min + 1;

	pt = malloc(sizeof(int) * cap);

	if (pt == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		pt[k] = min++;

	return (pt);
}
