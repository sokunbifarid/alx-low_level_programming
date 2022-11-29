#include "main.h"

/**
* _isupper - function
* @c: character
* Return: return value
*/

int _isupper(int c)
{
	if ((c <= 'Z') && (c >= 'A'))
		return (1);
  else
    return (0);
}
