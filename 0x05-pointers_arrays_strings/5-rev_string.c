#include <stdio.h>
#include "main.h"

/**
* rev_string - function
* @s: value
*/

void rev_string(char *s)
{
	int i = _strlen(s) - 1;
	
	char ced = "";

	while (i >= 0)
	{
		ced += s[i];
		i--;
	}
	s = ced;
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
