#include "main.h"

/**
 * wildcmp - function
 * @s1: argument character 1
 * @s2: argument character 2
 * Return: return function of a function
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (*s1 != '\0' && wildcmp(s2 + 1, s1 + 1));
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
		return ((*s1 != '\0' && wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));
	return (0);
}
