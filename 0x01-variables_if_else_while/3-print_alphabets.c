#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
