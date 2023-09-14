#include "main.h"

/**
 * print_to_98 - This function prints real numbers
 * @n: starting point of the real numbers
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + i);
		}
	}
	_putchar('\n');
}
