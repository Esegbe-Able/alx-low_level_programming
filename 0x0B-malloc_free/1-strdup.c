#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that duplicate to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, s = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	aaa = malloc(sizeof(char) * (k + 1));

	if (aaa == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		aaa[s] = str[s];

	return (aaa);
}
