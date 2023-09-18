#include "main.h"

/**
 * puts2 - Function to print every other character of a string.
 * @str: pointer to the string.
 *
 */
void puts2(char *str)
{
	int i, length;

	while (str[length] != 0)
		length++;
	for (i = 0; i < length; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}

	_putchar('\n');
}
