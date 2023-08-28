#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to the head of list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *c = *head;
	listint_t *next = NULL;

	while (c != NULL)
	{
		next = c->next;
		c->next = prev;
		prev = c;
		c = next;
	}

	*head = prev;

	return (*head);
}
