#include "lists.h"
/**
 * listint_len - This returns element in a linked list
 * @h: pointer to the head of a list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
