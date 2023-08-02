#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: input
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/**
		 * Base case: when we reach the
		 * end of the string,return
		 */
		return;
	}
	/*Recursively call the function with the next character*/
	_print_rev_recursion(s + 1);
	/*Print the current character after all recursive calls have finished*/
	_putchar(*s);
}
