#include "main.h"

/**
 * _isupper - checks for uppercase letters.
 * @c: stores the letter entered.
 *
 * Return: 1 if c is uppercase
 *	: 0 if c is not uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
