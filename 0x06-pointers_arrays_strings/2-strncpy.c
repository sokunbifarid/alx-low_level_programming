#include "main.h"
#include <stdio.h>

/**
 *_strncpy - function
 *@dest: value
 *@src: value
 *@n: value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	dest[i] = '\0';
	return(dest);
}
