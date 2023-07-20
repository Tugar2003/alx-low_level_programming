#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100 following FizzBuzz rules
 * If the number is multiple of 3, print "Fizz"
 * If the number is multiple of 5, print "Buzz"
 * If the number is multiple of both 3 and 5, print "FizzBuzz"
 * Otherwise, print the number itself
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");
	return (0);
}
