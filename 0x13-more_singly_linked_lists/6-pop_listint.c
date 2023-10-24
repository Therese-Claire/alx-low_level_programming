#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list and returns the head node’s data (n).
 * @head: pointer to the pointer of the head of the linked list
 *
 * Return: return 0 if linked list is empty, otherwise
 * return the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;


	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	n = start->n;
	free(start);

	return (n);
}
