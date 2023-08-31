#include "main.h"

/**
 * flip_bits - this returns the num of bits you need to flip
 * to get from one num to another
 * @n: The 1st number
 * @m: The 2nd number
 *
 * Return: num of bits needed to flip to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
