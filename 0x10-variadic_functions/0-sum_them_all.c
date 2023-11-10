#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function sums up all of its paramters.
 * @n: number of paramters to be passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int k, sum = 0;

	va_start(add, n);

	for (k = 0; k < n; k++)
		sum += va_arg(add, int);

	va_end(add);

	return (sum);
}
