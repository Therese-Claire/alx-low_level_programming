#include "main.h"

/**
 * print_line - function that prints the numbers, from 0 to 9
 * @n: the number pf times _ prints
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
