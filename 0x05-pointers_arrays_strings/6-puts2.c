#include <stdio.h>
#include "main.h"

/**
* puts2 - function
* @str: value
*/

void puts2(char *str)
{
	int i = _strlen(str) - 1;

	int j;

	for (j = 0; j <= i; j++)
	{
		if (j == 0)
		{
			_putchar(str[j]);
		}
		else if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
}

/**
 * _strlen - function
 * @s: value
 * Return: value
 */

int _strlen(char *s)
{
	int i = 0, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		i++;
	}
	return (i);
}
