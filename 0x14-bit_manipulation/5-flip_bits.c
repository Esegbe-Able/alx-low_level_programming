#include "main.h"

/**
 * flip_bits - flip_bits function counts the number of bits to change
 * to get from one number to another
 * @n: input 1
 * @m: input 2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counter = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current_bit = exclusive >> k;
		if (current_bit & 1)
			counter++;
	}

	return (counter);
}
