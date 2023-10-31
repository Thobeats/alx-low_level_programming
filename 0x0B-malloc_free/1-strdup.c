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
	int len;
	char *newString;

	/** Return null if the str is null*/
	if (*str == '\0')
		return (NULL);

	/**get the length of the string and use it as the size*/
	len = 0;
	while (str[len] != '\0')
		len++;

	newString = (char *)malloc(sizeof(char) * (len + 1));

	if (newString == NULL)
		return (NULL);

	/** Copy the old string into the new string */
	for (i = 0; i < len; i++)
	{
		newString[i] = str[i];
	}

	return (newString);

}
