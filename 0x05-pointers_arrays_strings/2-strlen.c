#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: string
 * Return: lenght 0
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
