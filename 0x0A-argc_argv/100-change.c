#include "main."

/**
 * main - Prints the minimum number of coins to make change
 *
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int change;
	int coins;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}

		change = atoi(argv[1]);

		coins = 0;
		coins += calc_change(&change, 10);
		coins += calc_change(&change, 5);
		coins += calc_change(&change, 2);
		coins += calc_change(&change, 1);

		printf("%d\n", coins);
	}

	return (0);
}

/**
 * calc_change - Calculates the number of coins that you'll receive
 *
 * @change: the money you want to change
 * @cents: cent to make change with
 *
 * Return: the number of coins
 */

int calc_change(int *change, int cents)
{
	int coin = 0;

	while (*change >= cents)
	{
		coin++;
		*change -= cents;
	}

	return (coin);
}
