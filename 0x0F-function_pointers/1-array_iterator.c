#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an array
 * @array: array of an integer
 * @size: size of an array
 * @action: pointer to the function to be applied on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
