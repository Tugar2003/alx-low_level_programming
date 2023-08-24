#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cunt = 0;
	const list_t *curnt;

	for (curnt = h; curnt != NULL; curnt = curnt->next)

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		cunt++;
	}
	return (cunt);
}
