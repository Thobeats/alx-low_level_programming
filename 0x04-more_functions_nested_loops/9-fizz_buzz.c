#include <stdio.h>
/**
 * main - Print the Fizz Buzz Test
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
