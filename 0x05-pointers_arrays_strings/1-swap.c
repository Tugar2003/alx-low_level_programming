#include "main.h"

/**
 * swap_int - functions that swaps two integers
 * @a: integers to swap
 * @b: integers to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}


