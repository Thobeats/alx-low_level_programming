#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concatStr;
	int len1;
	int len2;

	/**get the length of the two strings*/
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	/** Allocate the space*/
	concatStr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatStr == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		concatStr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		concatStr[i] = s2[j];
		j++;
		i++;
	}
	return (concatStr);
}
