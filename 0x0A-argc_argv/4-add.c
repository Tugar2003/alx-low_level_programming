#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * isNumber - Check if a string contains only digits (0-9).
 * @str: The string to check
 *
 * Return: true if the string contains only digits, false otherwise
 */
bool isNumber(const char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	{
	return (false);
	}
	str++;
	}
	return (true);
}

/**
 * main - A program that adds positive numbers.
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;

	for (i = 1; i < argc; i++)
	{
	if (!isNumber(argv[i]))
	{
	printf("Error\n");
	return (1);
	}

	num = atoi(argv[i]);
	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}

	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
