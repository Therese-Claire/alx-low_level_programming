#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the pointer of the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->head;
		free(current_node);
	}

	*head = NULL;
}
