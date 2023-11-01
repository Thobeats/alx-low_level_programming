#include "main.h"

/**
 * argstostr - Concatenates all the args of the program
 *
 * @ac: the length of the args
 * @av: the arguments
 *
 * Return: concatenated string, NULL if ac is 0 or av is NULL
 */

char *argstostr(int ac, char **av)
{
	char *avmalloc;
	int i;
	int j;
	int length;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			continue;
		}

		length += j + 1;
	}

	avmalloc = (char *)malloc((sizeof(char) * length) + 1);

	if (avmalloc == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			avmalloc[k] = av[i][j];
		}

		avmalloc[k] = '\n';

		if (i == (ac - 1))
		{
			avmalloc[k + 1] = '\0';
		}

		k++;
		i++;
	}

	return (avmalloc);
}
