#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function that returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str : pointer that points to the newly allocated memory.
 *
 * Return: NULL if str is NULL or pointer to duplicated string
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	size_t size;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	duplicate = malloc(sizeof(char) * size + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	
	strcpy(duplicate, str);

	return (duplicate);
}
