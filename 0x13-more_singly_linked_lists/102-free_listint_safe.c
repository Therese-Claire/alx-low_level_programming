#include "lists.h"
/**
 * free_listint_safe - Prints a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t *head)
{
	size_t size = 0;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (size);
	for (current = *head; current != NULL && current > current->next; current = next)
	{
		size++;
		next = curent->next;
		free(current);
	}

	*head = NULL;
	return (size);
}
