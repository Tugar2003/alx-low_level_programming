#include <stdio.h>

/**
 * main - Prints the lowercase alphabet using putchar function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}

