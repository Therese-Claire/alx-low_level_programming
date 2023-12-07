#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: Pointer to the head of dlistint_t list.
 *
 * Return: Number of elements in dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		nodeCount++;
		current = current->next;
	}
	return (nodeCount);
}
