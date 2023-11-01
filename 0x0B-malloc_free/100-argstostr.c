#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main function of the code
 * @ac: input for int
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, m, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		str[k] = av[j][m];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
