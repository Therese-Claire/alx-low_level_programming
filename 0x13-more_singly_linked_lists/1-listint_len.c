#include "lists.h"

/**
 * listint_len - Function returns the number of elements in the linked
 * listint_t list
 * @h: pointer to the linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
