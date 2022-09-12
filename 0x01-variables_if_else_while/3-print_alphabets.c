#include <stdio.h>
/**
 * main - entry
 * @void: false
 * Return: value
 */
int main(void)
{
	char caps;
	
	for (caps = 'a';caps <= 'z';caps++)
	{
		putchar(caps);
	}
	
	for (caps = 'A'; caps <= 'Z'; caps++)
	{
		putchar(caps);
	}

	putchar('\n');
	return (0);
}
