#include "lists.h"
void before_main(void) __attribute__ ((constructor));

/**
 * before_main - prints message before main execute
 *
 * Return: nothiing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
