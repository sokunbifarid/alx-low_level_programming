#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *string_toupper - function
 *@cara: value
 *Return: value
 */

char *string_toupper(char *cara)
{
	int i = 0;

	while (cara[++i])
	{
		while (!(cara[i] >= 'a' && cara[i] <= 'z'))
		{
			i++;
		}
		if (cara[i - 1] != '\0')
		{
			if (!(isalpha(cara[i - 1])))
			{
				cara[i] -= 32;
			}
		}
	}
	return (cara);
}