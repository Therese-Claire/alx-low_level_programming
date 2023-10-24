#include "lists.h"

/**
 * add_nodeint_end - function adds new node at end of the list
 * @head: points to the pointer of the link list
 * @n: element to add at end of the linked list
 *
 * Return: addr of new element. Otherwise, NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_lastNode;
	listint_t *temp;

	new_lastNode = (listint_t *)malloc(sizeof(listint_t));
	if (new_lastNode == NULL)
		return (NULL);

	new_lastNode->n = n;
	new_lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = new_lastNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_lastNode;
	}

	return (new_lastNode);
}
