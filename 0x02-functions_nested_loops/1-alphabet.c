#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: Always 0.
 */
void printLowerAlpha(void)
{
char c;
for (c = 'a'; c <= 'z'; c++);
{
putchar(c);
}
putchar('\n');
}


int main(void)
{
print_alphabet();
return (0);
}
