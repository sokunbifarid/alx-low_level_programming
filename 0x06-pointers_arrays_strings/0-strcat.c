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
	char i = "";
	
	char space = " ";
	
	strcat(i,dest);
	strcat(i,space);
	strcat(i,src);
	return (i);
}
