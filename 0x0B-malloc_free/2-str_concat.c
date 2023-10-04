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
	size_t length;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	length = strlen(s1) + strlen(s2);
	catPtr = malloc(sizeof(char) * length + 1);

	if (catPtr == NULL)
	{
		return (NULL);
	}

	strcpy(catPtr, s1);
	strcat(catPtr, s2);

	return (catPtr);
}
