#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that takes a pointer to a string
 * @str: checks input string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t lenght;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Calculate the length of the input string*/
	lenght = strlen(str);

	/*Allocate memory for the duplicated string using malloc*/
	duplicate = malloc(sizeof(char) * (lenght + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
