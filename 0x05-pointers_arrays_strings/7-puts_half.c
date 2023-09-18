#include "main.h"

/**
 * puts_half - function prints half of string
 * @str: points to the string.
 *
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int start;

	while (str[len] != 0)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		len = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
