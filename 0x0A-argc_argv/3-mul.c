#include <stdio.h>
#include <stdlib.h>

/**
* main - autoloaded function
*@argc: argument 1
*@argv: argument 2
*Return: return value
*/

int main(int argc, char *argv[])
{
	int f1, f2, f0;

	if (argc > 2)
	{
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);
		f0 = f1 * f2;

		printf("%d\n", f0);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
