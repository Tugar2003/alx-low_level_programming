#include <stdio.h>

/**
 * main - Prints the lowercase alphabet without q & e
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

