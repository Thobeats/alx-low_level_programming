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
	if (argc > 2)
		printf("%d\n", argv[1] * argv[2]);
	else
		printf("Error\n");

	return (1);

}
