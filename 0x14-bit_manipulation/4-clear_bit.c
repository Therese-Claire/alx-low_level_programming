#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned  long int size = sizeof(*n) * 8;
	unsigned long int mask;

	if (n == NULL)
		return (-1);

	if (index >= size)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
