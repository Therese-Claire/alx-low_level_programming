#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cht;

	cht = 'a';
	while (cht <= 'z')
	{
		putchar(cht);
			cht = cht + 1;
	}

	putchar('\n');

	return (0);
}
