#include "main.h"
#include <stdio.h>

/**
 * _strcmp -  a function that compares two strings
 * @s1: first pointer to a string to be compared
 * @s2: second pointer to a string to be compared
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
