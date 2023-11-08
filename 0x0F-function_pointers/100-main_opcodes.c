#include <stdio.h>
#include <stdlib.h>

/**
 * main - the  main function prints its own opcodes
 * @argc: arguments   counts
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, k;
	char *arrary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arrary = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", arrary[k]);
			break;
		}
		printf("%02hhx ", arrary[k]);
	}
	return (0);
}
