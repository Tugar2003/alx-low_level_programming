#include "main.h"

/**
 * _puts - a function that prints astring, followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
