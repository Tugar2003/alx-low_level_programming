#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to the head list
 * @idx: position to insert
 * @n: integer value
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *c;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	c = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (c != NULL && count < idx - 1)
	{
		c = c->next;
		count++;
	}

	if (c == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = c->next;
	c->next = new_node;

	return (new_node);
}
