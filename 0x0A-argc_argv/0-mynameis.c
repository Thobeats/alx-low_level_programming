#include "main.h"

/**
 * _myname - Prints the name of the file
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 for success
 *
 *
 */

int _myname(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);

}
