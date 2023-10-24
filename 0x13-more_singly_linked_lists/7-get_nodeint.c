#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: the index of the nth node, starting from 0.
 *
 * Return: index of the node, otherwise 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);

		current_node = current_node->next;
		count++;
	}

	return (NULL);
}
