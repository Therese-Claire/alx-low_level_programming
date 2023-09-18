#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to be counted.
 *
 * Return: Returns i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 1; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
