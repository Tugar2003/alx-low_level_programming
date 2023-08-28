#include "lists.h"
/**
 * add_nodeint - add new node to the beginning of a list
 * @head: double pointer to the head of the list
 * @n: integer value
 *
 * Return: address or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
