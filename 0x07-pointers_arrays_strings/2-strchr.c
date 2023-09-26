#include "main.h"
#define NULL ((void *)0)

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
	char *ptr = s;
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
	}

	return (NULL);
}
