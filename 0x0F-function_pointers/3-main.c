#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - perform input operation
 *
 * @argc: number of input arguments
 * @argv: array of arguments
 *
 * Return: error if failed, result on success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (strcmp("/", argv[2]) == 0 || strcmp("%", argv[2]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(a, b));
	return (0);
}
