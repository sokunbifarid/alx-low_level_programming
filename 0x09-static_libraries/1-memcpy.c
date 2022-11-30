#include "main.h"

/**
* _memcpy - function memcpy
* @dest: character
* @src: character
* @n: ineteger
* Return: return value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

