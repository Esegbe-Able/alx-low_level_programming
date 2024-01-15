#include "main.h"

/**
 * _memcpy - _memcpy copies memory area
 * @dest: array of char to copy into
 * @src: character array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
