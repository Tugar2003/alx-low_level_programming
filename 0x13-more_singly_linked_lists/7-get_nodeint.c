#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of list
 * @index: index of the to retrieve
 *
 * Return: pointer to nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;
	unsigned int count = 0;

	while (c != NULL)
	{
		if (count == index)
			return (c);
		count++;
		c = c->next;
	}

	return (NULL);
}
