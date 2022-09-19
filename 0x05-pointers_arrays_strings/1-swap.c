#include "main.h"

/**
 * swap_int - function
 * @*a: value
 * @*b: value
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
