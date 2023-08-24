#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: pointer to the head of linked list
 * Return: num of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
