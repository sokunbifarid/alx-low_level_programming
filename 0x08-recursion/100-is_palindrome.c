#include "main.h"

/**
 * is_palindrome - Function
 * @s: character
 * Return: Returns the integer
 */

/**
 * mesure_str - function
 * @word: character
 * Return: Functions return value
 */

/**
 * accessWord - accesses the input
 * @word: character value
 * @l: integer
 * @m: integer 2
 * Return: return value of function
 */

int is_palindrome(char *s)
{
	int i = 0;
	
	int j = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, j, i));
}

int mesure_str(char *word)
{
	int k = 0;

	if (*(word + k))
	{
		k++;
		k += find_strlen(word + k);
	}

	return (k);
}

int accessWord(char *word, int l, int m)
{
	if (word[index] == word[l / 2])
		return (1);

	if (word[m] == word[l - m - 1])
		return (accessWord(word, l, m + 1));

	return (0);
}
