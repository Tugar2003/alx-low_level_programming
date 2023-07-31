#include "main.h"

/**
 * char *_strchr - a function that locates a character in a string
 * @s: a pointer to the input string
 * @c: the seeking character in *s
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
