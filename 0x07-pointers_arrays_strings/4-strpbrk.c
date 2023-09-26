#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s : Points to the string
 * @accept : points to the string accepted
 *
 * Return: Returns pointer to the byte in s
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
