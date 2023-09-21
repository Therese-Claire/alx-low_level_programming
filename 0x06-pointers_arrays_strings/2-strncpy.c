#include "main.h"

/**
 * *_strncpy - This functioncopies a string from src to dest.
 * @dest: first pointer that points to char.
 * @src: second pointer that points to char.
 * @n: the number of bytes.
 *
 * Return: ptr.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];

		i++;
	}

	dest[i] = '\0';

	return (ptr);
}
