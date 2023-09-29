#include "main.h"

/**
 * factorial - Function returns factorial of given number
 * @n : Given number.
 * Return: -1 if n is less than 0, and the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
