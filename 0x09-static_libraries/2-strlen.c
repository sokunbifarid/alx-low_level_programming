#include "main.h"

/**
 *_strlen - function
 * @s: character
 *Return: return value
 */

int _strlen(char *s)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	j++;
	return (j);
}
