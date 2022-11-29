#include <stdio.h>

/**
* main - autoloaded function
* @argc: argument 1
* @argv: argument 2
* Return: return value
*/

int main(int argc, char *argv[])
{
		int value = 0;

		while (value < argc)
		{
			printf("%s\n", argv[value]);
			value++;
		}
		return (0);
}
