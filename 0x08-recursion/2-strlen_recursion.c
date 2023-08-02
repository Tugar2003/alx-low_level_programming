#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The string to be measured
 * Return: Lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
