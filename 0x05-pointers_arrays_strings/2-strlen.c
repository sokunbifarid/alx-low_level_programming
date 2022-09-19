#include "main.h"
#include <string.h>

/**
 * _strlen - function
 * @s: value
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
