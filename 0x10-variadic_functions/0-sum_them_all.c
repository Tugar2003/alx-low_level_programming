#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the num of arguements to sum
 * @...: variable number of integer arguements
 *
 * Return: the sum of arguements
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, num;
	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);
	return (sum);
}

