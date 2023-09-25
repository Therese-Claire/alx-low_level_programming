#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte.
 * @s : points to the memory area to be filled
 * @b : The constant to fill the memory bytes
 * @n : number of memory bytes to fill.
 *
 * Return: Pointer to that points the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}
