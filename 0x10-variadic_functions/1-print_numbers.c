#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this function prints numbers followed by a new line.
 * @separator: string to be printed between numbers(It separates them from each other).
 * @n: number of integers passed to the function.
 * @...: A variable number of numbers that is to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list counts;
	unsigned int k;

	va_start(counts, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(counts, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(counts);
}
