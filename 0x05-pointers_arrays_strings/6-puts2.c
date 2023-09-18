#include "main.h"

/**
 * puts2 - Function to print every other character of a string.
 * @str: stored the string inputted
 *
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
