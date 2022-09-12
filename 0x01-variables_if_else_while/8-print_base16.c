#include <stdio.h>
/**
 * main - function
 * @void: null
 * Return: value
 */
int main(void)
{
	char super;

	for (super = '0'; super <= '9'; super++)
	{
		putchar(super);
	}

	for (super = 'a'; super <= 'f'; super++)
	{
		putchar(super);
	}
	putchar('\n');
	return (0);

}
