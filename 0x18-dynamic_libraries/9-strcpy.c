#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte\0, to the buffer pointed to by dest.
 * @dest: buffer to copy.
 * @src: source string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
		x++;
	}

	return (dest);
}
