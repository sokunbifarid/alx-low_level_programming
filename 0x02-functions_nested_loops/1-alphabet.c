#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
}
