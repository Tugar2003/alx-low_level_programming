#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list
 * @head: Double pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}
