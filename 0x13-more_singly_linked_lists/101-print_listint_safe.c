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
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	/* Check if current node points to a previously visited node */
	if (current->next >= current)
	{
		loop_node = current->next;
		break;
	}

		current = current->next;
	}

	/* If a loop is detected, print " -> [loop_node_address] [loop_node_value]" */
	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		count++;
	}

	return (count);
}
