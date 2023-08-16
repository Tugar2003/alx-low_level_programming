#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on (success)
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
	printf("%02x", *ptr);
	ptr++;
	if (i != bytes - 1)
	printf(" ");
	}
	printf("\n");

	return (0);
}
