#include "main.h"

/**
 * puts2 - Function to print every other character of a string.
 * @str: stored the string inputted
 *
 */
void puts2(char *str)
{
	int i;
	char ch;

	while (str[i] != '\0')
	{
		ch = str[i];
		_putchar(ch);
		i += 2;
	}

	_putchar('\n');
}
