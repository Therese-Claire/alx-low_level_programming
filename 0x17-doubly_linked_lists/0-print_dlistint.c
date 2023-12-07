#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of dlistint_t list.
 * @h: pointer to the head of the doubly list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
