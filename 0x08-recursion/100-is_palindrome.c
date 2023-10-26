#include "main.h"

/**
 * is_palindrome_check - Checks for a palindrome string
 *
 * @s: the string
 * @start: the beginning index
 * @end: the final index
 *
 * Return: 1 if the string is palindrome but 0 if it is not
 */

int is_palindrome_check(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Confirms a palindrome string
 *
 * @s: the string
 *
 * Return: 1 if the string is palindrome but 0 if it is not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_check(s, 0, length - 1));
}
