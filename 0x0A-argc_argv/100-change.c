#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_min_coins - the minimum number of coins needed to make change
 * @cents: input
 * Return: count
 */
int calculate_min_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0, i;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	return (count);
}

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents;
	int min_coins;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		min_coins = calculate_min_coins(cents);
		printf("%d\n", min_coins);
	}
	return (0);
}

