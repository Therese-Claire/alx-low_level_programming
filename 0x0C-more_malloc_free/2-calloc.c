#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @ptr : memory area to be filled
 * @b : char to copy
 * @n : number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *ptr, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb : elements of the array
 * @size : size of the array
 *
 * Return: NULL if nmemb or size is 0 or malloc fails or
 * return pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}

	_memset(s, 0, nmemb * size);

	return (s);
}
