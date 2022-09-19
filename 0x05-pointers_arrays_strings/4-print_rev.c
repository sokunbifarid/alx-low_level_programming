#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* print_rev - function
* @s: value
*/

void print_rev(char *s)
{
	int i = _strlen(s);
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
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
