#include <stdio.h>
/**
 * main - function
 * @void: arg
 * Return: value
 */
int main(void)
{
	char cube;

	for (cube = 'a'; cube <= 'z'; cube++)
	{
		if (cube != 'q' && cube != 'e')
		{
			putchar(cube);
		}	
	}

	putchar('\n');

	return (0);

}
