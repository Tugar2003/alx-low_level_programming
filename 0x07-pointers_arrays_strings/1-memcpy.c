#include "main.h"

/**
 * char *_memcpy - a function that copies memory area
 * @dest: destination memory storage
 * @src: source where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i =0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

