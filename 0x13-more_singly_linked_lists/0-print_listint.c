#include "lists.h"

/**
 * print_listint - function printing all the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
