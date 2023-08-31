#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: The number from which to get the bit
 * @index: The index of the bit to get
 *
 * Return: specified index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
