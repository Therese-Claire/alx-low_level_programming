#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the address of the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_node = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = next_node;
	}

	*head = pre_node;
	return (*head);
}
