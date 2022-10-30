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
	unsigned int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
