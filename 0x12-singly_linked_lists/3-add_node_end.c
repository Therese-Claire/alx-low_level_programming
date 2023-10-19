#include "lists.h"

/**
 * add_node_end - function adds new node at the end of a list
 * @head: the first linked list
 * @str: the string to add to the node
 *
 * Return: address of new list. Otherwise NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (*head);
}
