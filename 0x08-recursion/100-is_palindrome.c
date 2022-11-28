#include "main.h"

/**
 * is_palindrome - Function
 * @s: character
 * Return: Returns the integer
 */

int is_palindrome(char *s)
{
	int i = 0;
	
	int j = mesure_str(s);

	if (!(*s))
		return (1);

	return (accessWord(s, j, i));
}

/**
 * mesure_str - function
 * @word: character
 * Return: Functions return value
 */

int mesure_str(char *word)
{
	int k = 0;

	if (*(word + k))
	{
		k++;
		k += mesure_str(word + k);
	}

	return (k);
}

/**
 * accessWord - accesses the input
 * @word: character value
 * @l: argument integer
 * @m: argument integer 2
 * Return: return value of function
 */

int accessWord(char *word, int l, int m)
{
	if (word[m] == word[l / 2])
		return (1);

	if (word[m] == word[l - m - 1])
		return (accessWord(word, l, m + 1));

	return (0);
}
