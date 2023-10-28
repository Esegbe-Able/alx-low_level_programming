#include "main.h"
/**
 * _memset - this script fills a block of memory with a specific value
 * @s: starting address of the memory that is to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: Output for n (changed array with new value for n bytes)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;


	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
