#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size : size of the array
 * @c : stores the array of strings.
 * Return: c or NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i != size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
