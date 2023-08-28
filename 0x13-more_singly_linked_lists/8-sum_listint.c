#include "lists.h"

/**
 * sum_listint - returns the sum of all linked list
 * @head: pointer to the head list
 *
 * Return: (0) when empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *c = head;

	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}

	return (sum);
}
