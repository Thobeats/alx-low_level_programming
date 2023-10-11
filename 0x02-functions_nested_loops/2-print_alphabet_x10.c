#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints out all the alphabet in lowercase
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
    {
      for (i = 97; i <= 122; i++)
      {
          putchar(i);
      }
      putchar('\n');
    }
	
   
}
