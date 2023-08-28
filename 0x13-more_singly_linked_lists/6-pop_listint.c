#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the head of a list
 *
 * Return: data(n) of the deleted head node or (0) empty
 */
int pop_listint(listint_t **head)
{
	int d = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	d = temp->n;
	*head = (*head)->next;
	free(temp);

	return (d);
}
