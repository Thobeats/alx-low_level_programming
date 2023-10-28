#include "main.h"

/**
 * main - Prints the multiplication of two arguments
 *
 * @argc: argument count
 * @argv: an array of the argumentsi
 *
 * Return: 0 for success
 *
 *
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

}
