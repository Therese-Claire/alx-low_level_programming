#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: pointer to the string
 *
 * Return: ptr.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
