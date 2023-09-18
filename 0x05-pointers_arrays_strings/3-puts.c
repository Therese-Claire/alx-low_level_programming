#include "main.h"

/**
 * _puts - prints a string.
 * @str: stored the string.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		str++;
	}

	_puchar = ('\n');
}
