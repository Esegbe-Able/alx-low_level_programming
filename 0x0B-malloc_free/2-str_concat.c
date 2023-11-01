#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that get ends of input and add together for size
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: the values when s1 and s2 has been concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, ai;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = ai = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[ai] != '\0')
		ai++;
	conct = malloc(sizeof(char) * (k + ai + 1));

	if (conct == NULL)
		return (NULL);
	k = ai = 0;
	while (s1[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}

	while (s2[ai] != '\0')
	{
		conct[k] = s2[ai];
		k++, ai++;
	}
	conct[k] = '\0';
	return (conct);
}
