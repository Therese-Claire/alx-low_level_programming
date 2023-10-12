#include <stdio.h>
#include <starg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed betweeen numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = n; i < n; i++)
	{
		printf("%d ", va_arg(ap, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(ap);

	printf('\n');
}
