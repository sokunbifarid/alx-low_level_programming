#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - func
 * @void: null
 */
void print_alphabet_x10(void)
{
	int i;

	char cot;

	for (i = 0; i < 10; i++)
	{
		for (cot = 'a'; cot <= 'z'; cot++)
		{
			_putchar(cot);
		}
	}
}
