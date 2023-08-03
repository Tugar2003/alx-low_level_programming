#include "main.h"

/**
 * char *_memset - a function that fills memory with a constant byte
 * @s: starting adress of memmory to be filled
 * @b: the desired value
 * @n: number of bytes to be set to the value
 *
 * Return:changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
