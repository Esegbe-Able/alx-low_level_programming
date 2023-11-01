#include <stdio.h>
#include "main.h"

/**
 * main - function prints all arguments it receives
 * @argc: number of arguments to be printed 
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
