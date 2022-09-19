#include <stdio.h>
#include "main.h"

/**
* puts2 - function
* @str: value
*/

void puts2(char *str)
{
	int i = _strlen(str) - 1;

	if (i == 0)
	{
		puts(str[i]);
	}
	else if (i % 2 == 0)
	{
		puts(str[i]);
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
