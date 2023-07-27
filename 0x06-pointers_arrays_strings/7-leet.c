#include "main.h"

/**
 * char *leet - a function that encodes a string into 1337
 * @str: string value
 * Return: str value
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = {'4', '3', '0', '7', '1'};
	char replace_map[] = {'a', 'e', 'o', 't', 'l'};
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == replace_map[i] || *ptr == replace_map[i] - 'a' + 'A')
			{
				/*Use the same encoding for both lowercase and uppercase letters*/
				*ptr = leet_map[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
