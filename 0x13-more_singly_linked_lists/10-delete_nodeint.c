#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the pointer of the head in the linked list
 * @index: node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeed, -1 if it failed;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && count < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		count++;
	}
	if (current_node == NULL)
		return (-1);
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
