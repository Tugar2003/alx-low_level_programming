#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of list
 * @head: a ptr to ptr to the list
 * @str: pointer to the string
 *
 * Return: address or NULL(fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *c;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		c = *head;
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = new_node;
	}

	return (new_node);
}
