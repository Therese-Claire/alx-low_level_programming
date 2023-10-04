#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1 : Destination string.
 * @s2 : Source string.
 *
 * Return: Pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *catPtr;
	size_t length1;
	size_t length2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	length1 = strlen(s1);
	length2 = strlen(s2);

	catPtr = malloc(sizeof(char) * (length1 + length2 + 1));

	if (catPtr == NULL)
	{
		return (NULL);
	}

	strcpy(catPtr, s1);
	strcat(catPtr, s2);

	return (catPtr);
}
