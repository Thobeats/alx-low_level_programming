#include <stdio.h>
/**
 * main - Prints the Highest Prime factor
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	long int number, maxFactor;
	int div;

	number = 612852475143;
	div = 2;

	while (number != 0)
	{
		if (number % div != 0)
			div++;
		else
		{
			maxFactor = number;
			number /= div;

			if (number == 1)
			{
				/* We have found the highest factor */
				printf("%ld is the highest factor\n", maxFactor);
				break;
			}
		}
	}

	return (0);

}
