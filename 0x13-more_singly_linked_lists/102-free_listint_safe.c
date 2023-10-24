#include "lists.h"
/**
 * free_listint_safe - Prints a listint_t linked list.
 * @h: double pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (size);

	current = *h;
	while (current != NULL && current > current->next)
	{
		size++;
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (size);
}
