#include <stdio.h>
#include "main.h"

/**
 *cap_string - function
 *@cara: value
 *Return: value
 */

char *cap_string(char *cara)
{
	int i = 0;

	while (i >= 0)
	{
		if (cara[i] == '\0' && cara[i + 1] == '\0')
		{
			break;
		}
		if (cara[i] >= 'a' && cara[i] <= 'z')
		{
			cara[i] = cara[i] - 32;
		}
		i++;
	}
	return (cara);
}
