#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array named size and assign char c to it
 * @size: size variable is the size of array
 * @c: character to assign
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
