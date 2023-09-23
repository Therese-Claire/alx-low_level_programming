#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string of characters.
 *
 * Return: str.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetChar[] = "aAeEoOtTlL";
	char leetCode[] = "4433007711";

	while (*ptr)
	{
		int i = 0;

		while (leet[i])
		{
			if (*ptr == leetChar[i])
			{
				*ptr = leetCode[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
