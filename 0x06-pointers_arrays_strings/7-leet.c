#include "main.h"
#include <stdio.h>

/**
 *leet - function
 *@sat: value
 *Return: value
 */

char *leet(char *sat)
{
	int i = 0, j = 0, cap_value = 7;

	char buggy[5000] = {'H','E','L','I','O','!','!','!'};

	while (sat[++i])
	{
		while (j <= cap_value)
		{
			if (sat[i] == buggy[j])
			{
				sat[i] = j + '0';
			}
			if (sat[i] - 32 == buggy[j])
			{
				sat[i] = j + '0';
			}
			j++;
		}
	}
	return (sat);
}
