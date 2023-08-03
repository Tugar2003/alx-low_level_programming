#include "main.h"
#include <stdio.h>

/**
 * char *_strncat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	/*Find the lenght of the destination string*/

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	/**
	 * Concatenate characters from src to dest, but at
	 * most n characters
	 */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i++;
	return (dest);
}
