#include "main.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n : Integer number
 * Return: -1 if no square root or n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	int guess = _sqrt_recursion(n / 2);
	int nextGuess = (guess + n / guess) / 2;

	if (nextGuess >= guess)
	{
		return (guess);
	}
	else
	{
		return (_sqrt_recursion(nextGuess));
	}
}
