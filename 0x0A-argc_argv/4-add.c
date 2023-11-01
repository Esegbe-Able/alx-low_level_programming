#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * add_positive_numbers - Function that adds positive numbers from command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 * Return: 0 if all argument passed or 1 if error
 */
int add_positive_numbers(int argc, char *argv[])
{
	int k, total = 0;
	char *num;

	if (argc == 1)
		return (0);

	for (k = 1; k < argc; k++)
	{
		num = argv[k];
		while (*num)
		{
			if (!isdigit(*num))
				return (1);
			num++;
		}
		total += atoi(argv[k]);
	}

	return (total);
}

/**
 * main - main function (Entry point of the program)
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result = add_positive_numbers(argc, argv);

	if (result == 1)
		printf("Error\n");
	else
		printf("%d\n", result);

	return (0);
}
