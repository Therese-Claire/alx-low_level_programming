#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s : points to the string.
 * @c : character to e located.
 *
 * Return: Pointer to the first occurrence of the character c in the string s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}

	return (NULL);
}
