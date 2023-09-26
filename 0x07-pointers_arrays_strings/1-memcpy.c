#include "main.h"

/**
 * *_memcpy - This function copies n bytes from,
 * src memory area to dest memory area.
 * @dest: points to dest memory area.
 * @src: points to src memory area.
 * @n: num of bytes to copy from memory area.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);
}
