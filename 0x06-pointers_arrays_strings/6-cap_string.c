#include "main.h"

/**
 * cap_string - Capitalize every word of a string
 *
 * @str: char array
 *
 * Return: uppercase character
 */

char *cap_string(char *str)
{
	char seperators[] = "\t \n,.;!?\"(){}";
	/**int isSeperator;*/
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; seperators[i] != '\0'; i++)
		{
			if (*ptr == seperators[i])
			{
				ptr++;
				/**isSeperator = 1;*/
				if (*ptr + 1 >= 'a' && *ptr + 1 <= 'z')
				{
					*ptr = *ptr - 32;
				}
				else
				{
					ptr--;
				}
			}
			else
			{
				/**isSeperator  = 0;*/
			}

			/**if (isSeperator)
			{
				ptr++;
				if (*ptr >= 'a' && *ptr <= 'z')
				{
					*ptr = *ptr - 32;
				}
				else
					ptr++;
			}*/
		}

		ptr++;
	}


	return (str);
}
