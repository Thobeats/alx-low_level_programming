#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of program arguments
 *
 * @argv: array of input arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < x - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
