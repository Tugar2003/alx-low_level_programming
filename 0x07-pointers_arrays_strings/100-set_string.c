#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to a character
 */
void set_string(char **s, char *to)
{
	/*Allocate memory for the new string*/
	*s = (char *) malloc(strlen(to) + 1);

	/**
	 * Copy the content of 'to' to the new memory
	 * location pointed by 's'
	 */
	strcpy(*s, to);
}
