#include <stdio.h>


void print_alphabet(void)
{
	char cat;

	for (cat = 'a'; cat <= 'z'; cat++)
	{
		putchar(cat);
	}
}

void print_alphabet_x10(void)
{
	int i;
	char cot;

	for (i = 0; i <= 9; i++)
	{
		for (cot = 'a'; cot <= 'z'; cot++)
		{
			putchar(cot);
		}
	}

}
