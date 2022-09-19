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
