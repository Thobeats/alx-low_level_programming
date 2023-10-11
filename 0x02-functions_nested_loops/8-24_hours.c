#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Prints the time of the dady for Jack Bauer
 *
 * Return: nothing
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		if (hour < 10)
			_putchar('0' + hour + ':');
		else
			_putchar(hour + ':');

		for (minute = 0; minute < 60; minute++)
		{
			if (minute < 10)
			{
				_putchar('0' + minute);
			}
			else
			{
				_putchar(minute);
			}
		}
	}
}
