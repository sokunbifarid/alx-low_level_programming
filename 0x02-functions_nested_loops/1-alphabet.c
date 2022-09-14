#include "main.h"
/**
 * main - func
 * @void: empty
 * Return: value
 */

void print_alphabet(void)
{
	char cet;

	for (cet = 'a'; cet <= 'z'; cet++)
	{
		putchar(cet);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
