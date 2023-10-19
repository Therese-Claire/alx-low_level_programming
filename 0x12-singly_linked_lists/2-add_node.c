#include "lists.h"

/**
 * add_node_end - function adds new node at the end of a list
 * @head: the first linked list
 * @str: the string to add to the node
 *
 * Return: address of new list. Otherwise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
