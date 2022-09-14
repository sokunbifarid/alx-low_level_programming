#include <stdio.h>
/**
 * main - func
 * @void: empty
 * Return: value
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - function
 * @void: empty
 */
void print_alphabet(void)
{
	char cat;

	for (cat = 'a'; cat <= 'z'; cat++)
	{
		putchar(cat);
	}
}
