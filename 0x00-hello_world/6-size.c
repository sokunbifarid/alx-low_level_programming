#include <stdio.h>
char character;
int integer;
long int longinteger;
long long int longerinteger;
float floater;
int main(void)
{
	printf("Size of a char: %ld byte(s)",sizeof(character));
	printf("Size of an int: %ld byte(s)",sizeof(integer));
	printf("Size of a long int: %ld byte(s)",sizeof(longinteger));
	printf("Size of a long long int: %ld byte(s)",sizeof(longerinteger));
	printf("Size of a float: %ld byte(s)",sizeof(floater));
	return(0);
}

