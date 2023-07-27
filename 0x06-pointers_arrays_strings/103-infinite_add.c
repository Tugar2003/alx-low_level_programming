#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * char *infinite_add - a function that adds two numbers
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j;


	if (size_r <= len1 || size_r <= len2)
		return (0);
	/*Start adding the digits from the least significant digits*/
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = digit1 + digit2 + carry;

		if (size_r - 1 < 0)
			/*Buffer overflow*/

			return (0);
		/*Store the least significant digit*/

		r[size_r - 1] = sum % 10 + '0';
		/*Calculate the carry for the next iteration*/
		carry = sum / 10;

	       size_r--;
	}
	/*Check if the result will fit within the buffer*/
	if (size_r <= 0)
		/*Buffer overflow*/
		return (0);
	/*Shift the result to the beginning of the buffer and null-terminate*/
	memmove(r, r + size_r, strlen(r + size_r) + 1);

	return (r);
}
