#include "main.h"
#include <stdio.h>

/**
 *_strcmp - function
 *@s1: value
 *@s2: value
 *Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int i, s_1 = 0, s_2 = 0, ans = 0;
	
	while (i >= 0)
	{
		if (s1[i] != '\0')
		{
			s_1++;
			i++;
		}
		else
		{
			i = 0;
		}
	}
	while (i >= 0)
	{
		if (s2[i] != '\0')
		{
			s_2++;
			i++;
		}
		else
		{
			i = 0;
		}
	}
	ans = s_1 - s_2;
	return (ans);
}
