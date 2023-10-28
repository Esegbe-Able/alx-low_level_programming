#include "main.h"
/**
 *_memcpy - it copies memory area
 *@dest: memory where is stored or saved
 *@src: memory where is copied
 *@n: no of bytes changed 
 *
 *Return: copied memory 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int j = n;


	for (; m < j; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
