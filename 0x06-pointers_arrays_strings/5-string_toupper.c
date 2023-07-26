#include "main.h"
#include <stdio.h>

/**
 * char *string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @str: string to be capitalized
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		/*Convert the lowercase letter to uppercase*/
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
