#include "main.h"

/**
 * main - Prints all the arguments
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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);

}
