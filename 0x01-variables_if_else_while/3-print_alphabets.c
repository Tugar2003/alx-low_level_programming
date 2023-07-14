#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabets using putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	while (lower_alpha <= 'z' && upper_alpha <= 'Z')
	{
		putchar(lower_alpha);
		lower_alpha++;

		putchar(upper_alpha);
		upper_alpha++;
	}

	putchar('\n');

	return (0);
}

