#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely (handles loops)
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		count++;
		temp = *h;
		*h = (*h)->next;
		free(temp);

		if (temp <= *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
