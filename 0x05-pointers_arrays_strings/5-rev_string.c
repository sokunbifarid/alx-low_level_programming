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

	char cheng[10000];

	char *verify = "Temporary Holding String";
	
	while (i > j)
	{
		cheng[j] = s[i];
		j++;
		i--;
	}
	verify = s;
	s = cheng;
	s = verify;
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
