#include "main.h"

/**
 * set_bit - function that sets the value of a bit to
 * 1 at a given index.
 * @n: pointer to the number
 * @index: index of the value to be set to set
 *
 * Return: 1 if successful or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(*n) * 8;

	if (n == NULL)
		return (-1);

	if (index >= size)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
