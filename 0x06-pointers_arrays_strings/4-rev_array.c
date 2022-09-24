#include "main.h"
#include <stdio.h>
/**
 *reverse_array - function
 *@a: value
 *@n: value
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1;

	int m[] = {1,2,3,4,5};

	for (i = 0; i < n; i++)
	{
		m[i] = a[j];
		j--;
	}
	a = m;
}
