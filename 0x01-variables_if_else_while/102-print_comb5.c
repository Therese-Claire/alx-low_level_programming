#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		int tens1 = num1 / 10;
		int ones1 = num1 % 10;

		for (num2 = num1; num2 < 100; num2++)
		{
			int tens2 = num2 / 10;
			int ones2 = num2 % 10;

			if (num1 <= num2)
			{
				putchar(tens1 / 10 + '0');
				putchar(tens1 % 10 + '0');
				putchar(' ');
				putchar(ones1 / 10 + '0');
				putchar(ones1 % 10 + '0');
				putchar(',');
				putchar(' ');
				putchar(tens2 / 10 + '0');
				putchar(tens2 % 10 + '0');
				putchar(' ');
				putchar(ones2 / 10 + '0');
				putchar(ones2 % 10 + '0');

				if (num1 != 99 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
