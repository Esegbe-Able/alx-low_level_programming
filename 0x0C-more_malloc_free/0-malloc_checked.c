#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This functions allocates memory 
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}

	return (pt);
}
