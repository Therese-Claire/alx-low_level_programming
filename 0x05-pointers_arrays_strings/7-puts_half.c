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

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len - 1) / 2;
	if (start % 2 == 1)
		start++;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
