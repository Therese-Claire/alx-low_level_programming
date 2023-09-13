#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product;

			product = i * j;

			if (product < 10)
			{

				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			_putchar(' ');

		}

		_putchar('\n');
	}
}
