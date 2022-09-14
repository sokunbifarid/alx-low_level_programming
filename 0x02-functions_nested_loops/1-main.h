#include <stdio.h>

void print_alphabet(void)
{
	char cop;

	for (cop = 'a'; cop <= 'z'; cop++)
	{
		putchar(cop);
	}
	putchar('\n');
}
