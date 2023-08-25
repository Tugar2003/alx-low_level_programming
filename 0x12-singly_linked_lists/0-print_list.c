#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cunt = 0;
	const list_t *c;

	for (c = h; c != NULL; c = c->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", c->len, c->str);

		c = c->next;
		cunt++;
	}


	return (cunt);
}
