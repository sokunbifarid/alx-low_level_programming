#include <stdio.h>
#include "main.h"
/**
 * main - function
 * @void: null
 * Return: value
 */
int main(void)
{
	int i;

	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;	
		}
	}
	_putchar('\n');
	return (j);
}
