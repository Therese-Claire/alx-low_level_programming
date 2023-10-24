#include "lists.h"

/**
 * add_nodeint - adds new node at the begining of a listint_t list
 * @head: pointer to the next node
 * @n: data to add
 *
 * Return: address of new element. Otherwise NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
