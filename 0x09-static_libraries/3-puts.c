#include "main.h"

/**
 *_puts - function
 * @str: character
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
