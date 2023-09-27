#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a : points to the array of integers
 * @size : size of the array.
 *
 */
void print_diagsums(int *a, int size)
{
	int diago1_sum = 0;
	int diago2_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		int index1 = i * size + i;
		int index2 = i * size + (size - 1 - i);

		diago1_sum += a[index1];
		diago2_sum += a[index2];
	}

	printf("%d, %d\n", diago1_sum, diago2_sum);
}
