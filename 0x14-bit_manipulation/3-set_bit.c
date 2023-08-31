#include "main.h"
/**
 * set_bit - ets the value of a bit to 1 at a given index
 * @n: Pointer to the num in which to set the bit
 * @index: the index of bit to set
 *
 * Return: 1 (success) or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
