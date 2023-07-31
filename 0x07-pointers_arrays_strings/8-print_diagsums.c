#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	/**
	 * calculate the sum of the main diagonal
	 * (top-left to bottom-right)
	 */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/**
	 * calculate the sum of the second diagonal
	 * (top-right to bottom-left)
	 */
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
