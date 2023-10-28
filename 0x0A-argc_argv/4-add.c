#include "main.h"

/**
 * main - Prints the addition of two arguments
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

	if (argc <= 1)
		printf("%d\n", 0);
	else if (argc > 1)
	{

		for (a = 1; a < argc; a++)
		{
			if (isdigit(argv[a]) == 0)
			{
				printf("Error\n");
				return (1);
			}

			b += atoi(argv[a]);
		}

		printf("%d\n", b);
	}

	return (0);

}
