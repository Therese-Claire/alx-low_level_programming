#include "main.h"

/**
 * print_rev - check the code
 * @s: variable that stores the string
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}