#include "main.h"

/**
 * swap_int - function that swaps 2 integer values.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
