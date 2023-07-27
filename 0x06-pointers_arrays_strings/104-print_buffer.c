#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer -  function that prints a buffer
 * @b: pointer to a buffer
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", (unsigned char)b[j]);
			else
				printf("   ");
		}

		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				char ch = b[j];

				if (isprint(ch))
					printf("%c", ch);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
