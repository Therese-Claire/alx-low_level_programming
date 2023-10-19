#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list
 * @h: pointer to list_t
 *
 * Return: number of elements printed.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
