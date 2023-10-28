#include "main.h"
/**
 * _strlen - function that outputs the length of a string
 * @s: string
 * Return: length of the string 
 */
int _strlen(char *s)
{
	int islong = 0;


	while (*s != '\0')
	{
		islong++;
		s++;
	}


	return (islong);
}
