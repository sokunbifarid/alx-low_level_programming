#include "main.h"

/**
 *_memcpy - function
 *@dest: value
 *@src: value
 *@n: value
 *Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}