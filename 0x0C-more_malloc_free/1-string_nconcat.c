#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to append
 * @s2: string to concatenate from
 * @n: the number of bytes
 * Return: pointer to a newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	char *concat;
	unsigned int len_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	len_concat = ((len_s1 + n) + 1);
	concat = malloc(sizeof(char) * len_concat);

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat, s2, n);
	concat[len_concat - 1] = '\0';

	return (concat);
}
