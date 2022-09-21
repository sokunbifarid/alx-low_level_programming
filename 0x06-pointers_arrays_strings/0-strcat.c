#include "main.h"
#include <string.h>

/**
* _strcat - function
* @dest: value
* @src: value
* Return: value
*/

char *_strcat(char *dest, char *src)
{
	int j = 0;
	while (dest[j] != '\0')
	{
		_putchar(dest[j] + '0');
		j++;
	}
	_putchar(' ');
	if (dest[j] == '\0')
	{
		j = 0;
	}
	while (src[j] != '\0')
	{
		_putchar(src[j] + '0');
		j++;
	}
	_putchar('\n');
