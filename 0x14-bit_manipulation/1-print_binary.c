#include "main.h"

/**
 * print_binary - The function prints the binary equivalence
 * of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
