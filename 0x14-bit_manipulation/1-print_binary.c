#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, size;
	int foundNonZeroBit = 0;

	size = sizeof(n) * 8;
	for (i = size - 1; i < size; i--)
	{
		unsigned long int bit = (n >> i) & 1;

		if (bit || foundNonZeroBit)
		{
			_putchar(bit + '0');
			foundNonZeroBit = 1;
		}
	}

	if (!foundNonZeroBit)
	{
		_putchar('0');
	}
}
