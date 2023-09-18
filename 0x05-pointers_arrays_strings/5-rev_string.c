#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: stores the string.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i = 0; j = i - 1; j >= i; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	_putchar('\n');
}
