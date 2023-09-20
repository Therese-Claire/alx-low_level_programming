#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string
 * @dest: first pointer that points to char.
 * @src: second pointer that points to char.
 *
 * Return: ptr.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr = dest;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];
	dest[dest_len] = '\0';
	return (ptr);
}
