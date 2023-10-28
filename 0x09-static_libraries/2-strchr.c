#include "main.h"
/**
 * _strchr - Entry point Function
 * @s: input
 * @c: input
 * Return: 0 at all times
 */
char *_strchr(char *s, char c)
{
	int a = 0;


	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
