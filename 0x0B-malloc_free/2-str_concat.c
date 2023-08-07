#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: input one
 * @s2: input two
 *
 * Return: concatenate s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1, len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	/*If s2 is NULL, treat it as an empty string*/
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Calculate the lengths of the input strings*/
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/*Allocate memory for the concatenated string using malloc*/
	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (result == NULL)
	{
		return (NULL);/*Memory allocation failed*/
	}

	/*Copy the content of s1 and s2 to the result string*/
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
