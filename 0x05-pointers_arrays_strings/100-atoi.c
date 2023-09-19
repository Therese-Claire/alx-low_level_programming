#include "main.h"

/**
 * _atoi - function converts a string to an integer.
 * @s: points to the string.
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > (INT_MAX % 10)))
		{
			return ((sign == -1) ? -2147483648 : 2147483647);
		}
		result = (result * 10) + digit;
		s++;
	}
	return (result * sign);
}
