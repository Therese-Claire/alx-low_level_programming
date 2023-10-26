#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: decimal equivalence of the number
 * @index: index to be returned
 *
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned int bit;

	if (index >= size)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
