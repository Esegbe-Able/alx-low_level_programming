#include "main.h"
/**
 * _strspn - Main function
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w = 0;
	int j;


	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				w++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (w);
		}
		s++;
	}
	return (w);
}
