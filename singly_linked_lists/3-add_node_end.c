#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: Pointer to the head of the list
 * @str: String to duplicate
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	new_node->str = malloc(sizeof(char) * (new_node->len + 1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i <= new_node->len; i++)
		new_node->str[i] = str[i];

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
