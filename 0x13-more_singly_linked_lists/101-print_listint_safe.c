#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *loop_node = NULL;

	while (head != NULL)
	{
		if (count == 0)
			printf("[%p] %d\n", (void *)head, head->n);
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			if (head == loop_node)
				break;
		}

		count++;
		if (count == 2)
			loop_node = head;

		head = head->next;
	}

	return (count);
}
