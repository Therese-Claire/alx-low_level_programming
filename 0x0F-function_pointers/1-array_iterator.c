#include <stdio.h>
#include "function_pointers"

/**
 * array_iterator - prints each elements of an array
 * @array: array of elements
 * @size: how many elements to print
 * @action: pointer to print function
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
