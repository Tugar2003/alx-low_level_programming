#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
