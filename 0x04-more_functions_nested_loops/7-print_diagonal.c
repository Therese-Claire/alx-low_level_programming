#include "main.h"

/**
 * print_diagonal - function that prints the a diagonal line
 * @n: number of times the line will be printed
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar(92);
				_putchar('\n');
				continue;
			}
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
