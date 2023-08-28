#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to list
 * @index: index of node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *c, *temp;
	 unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	c = *head;
	while (c != NULL && count < index - 1)
	{
		c = c->next;
		count++;
	}

	if (c == NULL || c->next == NULL)
		return (-1);

	temp = c->next;
	c->next = temp->next;
	free(temp);

	return (1);
}
