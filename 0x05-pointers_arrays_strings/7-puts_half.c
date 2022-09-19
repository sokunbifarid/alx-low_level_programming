#include <stdio.h>
#include "main.h"

/**
* puts_half - function
* @str: string
*/

void puts_half(char *str)
{
	int i = (_strlen(str) - 1);

	int j;

	if (i > 0)
	{
		for (j = (i / 2) + 1; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
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
