#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: The size of the triangle.
 *
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		if (size == 1)
		{
			_putchar(35);
			_putchar('\n');
		}

		else
		{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; --j)
			{
				_putchar(' ');
			}
			for (z = 1; z <= i; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		}
	}
}
