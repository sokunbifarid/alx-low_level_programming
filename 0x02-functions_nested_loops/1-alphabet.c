#include <stdio.h>
/**
 * main - func
 * @void: empty
 * Return: value
 */
void print_alphabet(void)
{
	char cat;

	for (cat = 'a'; cat <= 'z'; cat++)
	{
		putchar(cat);
	}
}

/**
 * print_alphabet - function
 * @void: empty
 * Return: value
 */
int main(void)
{
	print_alphabet();
	return (0);
}
