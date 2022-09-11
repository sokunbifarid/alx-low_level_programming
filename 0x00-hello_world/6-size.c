#include <stdio.h>
/**
 * main - entry point
 * @void: null
 * Return: function result
 */

int main(void)
{
	char character;
	int integer;
	long int longinteger;
	long long int longerinteger;
	float floater;
	printf("Size of a char: %ld byte(s)\n", sizeof(character));

	printf("Size of an int: %ld byte(s)\n", sizeof(integer));

	printf("Size of a long int: %ld byte(s)\n", sizeof(longinteger));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(longerinteger));

	printf("Size of a float: %ld byte(s)\n", sizeof(floater));

	return (0);
}

