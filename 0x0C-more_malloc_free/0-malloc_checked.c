#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/*Allocate memory using malloc*/
	void *ptr = malloc(b);
	/*Check if malloc fials*/
	if (ptr == NULL)
	{
	/*Terminate the process with status value of 98*/
	exit(98);
	}
	return (ptr);
}
