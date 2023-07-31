#include "main.h"

/**
 * _strsp - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: string containing characters to be matched
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;

		/**
		 * check if any character in 's' matches any
		 * character in 'accept'
		 */
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
		}

		if (!match)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}

			

