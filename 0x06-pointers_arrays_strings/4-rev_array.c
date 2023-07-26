#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: array
 * @n: the number of element of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	/*Swap elements at positions start and end*/
	{
	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	/*Move to the next pair of elements*/

	start++;
	end--;
	}
}
