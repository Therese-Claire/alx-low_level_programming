#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: stores the string.
 */
void rev_string(char *s)
{
	int length, start, end;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
