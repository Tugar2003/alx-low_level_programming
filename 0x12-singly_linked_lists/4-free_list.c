#include "lists.h"

/**
 * free_list - function to free list_t list
 * @head: pointer to the list to be freed
 * Return: void 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
