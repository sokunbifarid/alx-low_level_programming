#include <stdio.h>
#include "main.h"

/**
* rev_string - function
* @s: value
*/

void rev_string(char *s)
{
	int i = _strlen(s) - 1;

	int j = 0;

	while (i > j)
	{
		flip_char(s + i, s + j);
		j++;
		i--;
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

/**
 * flip_char - function
 * @a: value
 * @b: value
 */

void flip_char(char *a, char *b)
{
	char i;

	i = *a;
	*a = *b;
	*b = i;
}
