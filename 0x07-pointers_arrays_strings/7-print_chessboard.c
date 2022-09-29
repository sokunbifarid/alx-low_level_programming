#include "main.h"

/**
 *print_chessboard - function
 *@a: value
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (a[i][7])
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}
