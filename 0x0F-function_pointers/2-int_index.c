#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of integer
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
