#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of integer arguements.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int num;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
