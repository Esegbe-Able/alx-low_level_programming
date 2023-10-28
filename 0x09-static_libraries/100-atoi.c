#include "main.h"
/**
 * _atoi - a function that converts a string into an integer.
 *
 * @s: the string to use.
 *
 * * Return: the string converted into an integer.
 */
int _atoi(char *s)
{
 	int sign = 1, k = 0;
 	unsigned int res = 0;


 	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
 	{
 		if (s[k] == '-')
 			sign *= -1;
 		k++;
 	}
 	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
 	{
 		res = (res * 10) + (s[k] - '0');
 		k++;
 	}
 	res *= sign;
 	return (res);
 }
