#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string
 *
 * Return: void
 *
 */


void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int start;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end]; = temp;
		start++;
		end--;
	}
}
