#include "main.h"
#include <stdio.h>

/**
 * char *rot13 - encoder rot13
 * @str: pointer to string param
 *
 * Return: *str
 */
char *rot13(char *str)
{
	char *ptr = str;
	int is_lowercase, is_uppercase;

	while (*ptr != '\0')
	{
		is_lowercase = (*ptr >= 'a' && *ptr <= 'z');
		is_uppercase = (*ptr >= 'A' && *ptr <= 'Z');

		if (is_lowercase || is_uppercase)
		{
			char offset = (is_lowercase) ? 'a' : 'A';
			*ptr = ((*ptr - offset + 13) % 26) + offset;
		}
		ptr++;
	}

	return (str);
}
