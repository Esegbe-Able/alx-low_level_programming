#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function concatenates a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from.
 * @n: number of bytes from s2 to concatenate to s1
 * Return: output string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, l = 0, len1 = 0, len2 = 0;

	for (k = 0; s1 && s1[k]; k++)
		len1++;
	for (k = 0; s2 && s2[k]; k++)
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	for (k = 0; k < len1; k++)
	{
		s[k] = s1[k];
	}

	for (k = len1, l = 0; l < n && s2[l]; k++, l++)
	{
		s[k] = s2[l];
	}

	s[k] = '\0';

	return (s);
}
