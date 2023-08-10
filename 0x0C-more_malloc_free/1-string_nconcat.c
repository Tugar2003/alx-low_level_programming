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
	unsigned int len_s1, len_s2;
	char result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	result = (char *)malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, len_s1);
	strncpy(result, len_s2);
	result [len_s1 + n] = '\0';

	return (result);
}

