#include "main.h"

/**
 * *_strncat - This function appends the src string to the dest string
 * @dest: first pointer that points to char.
 * @src: second pointer that points to char.
 * @n: the number of bytes.
 *
 * Return: ptr.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n; i++)
		dest[dest_len++] = src[i];
	dest[dest_len] = '\0';
	return (ptr);
}
