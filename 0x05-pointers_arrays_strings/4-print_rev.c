#include "main.h"

/**
 * print_rev - check the code
 * @s: variable that stores the string
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; str[i] <= '\0'; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
