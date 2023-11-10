#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - The function prints strings and a new line after it .
 * @separator: The string to be printed between strings(It separates both strings).
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *string;
	unsigned int k;

	va_start(str, n);

	for (k = 0; k < n; k++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
