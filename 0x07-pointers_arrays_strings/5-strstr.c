#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Function that locates a substring.
 * @haystack : Points to the main string.
 * @needle : Points to the substring.
 *
 * Return: Returns a pointer to the beginning of the located substring
 * or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
