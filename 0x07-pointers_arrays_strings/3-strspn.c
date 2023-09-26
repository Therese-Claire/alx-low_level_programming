#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s : Points to the original string.
 * @accept : points to the accepted string.
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		length++;
	}
	return (length);
}
