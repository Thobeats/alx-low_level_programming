#include "main.h"

/**
 * _strdup - Duplicates a string and returns a pointer to the duplicate.
 *
 * @str: the string
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	char *newString;

	/** Return null if the str is null*/
	if (*str == '\0')
		return (0);

	/**get the length of the string and use it as the size*/
	for (i = 0; str[i]; i++)
	{
		continue;
	}

	newString = malloc(sizeof(char) * (i + 1));

	if (*newString == '\0')
		return (0);

	/** Copy the old string into the new string */
	while (*str)
	{
		*newString = *str;

		str++;
		newString++;
	}

	return (newString);

}
