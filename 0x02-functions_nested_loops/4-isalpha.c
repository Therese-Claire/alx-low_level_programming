#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c : takes the input.
 *
 * Return: 1 if c is  alphabet character and return 0 if c is not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
