#include "main.h"
#include <string.h>

/**
 * _strlen - function
 * @s: value
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	return (i);
}
