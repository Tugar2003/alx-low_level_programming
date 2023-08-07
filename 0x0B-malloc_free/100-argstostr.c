#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of my program.
 * @ac: Number of arguments.
 * @av: Array of strings containing arguments.
 *
 * Return: Pointer to the concatenated string, NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int pos;
	int i, total_length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	total_length += ac - 1;

	result = malloc(sizeof(char) * (total_length + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + pos, av[i]);
		pos += strlen(av[i]);

		if (i < ac - 1)
		{
			result[pos++] = '\n';
		}
	}
	result[total_length] = '\0';

	return (result);
}
