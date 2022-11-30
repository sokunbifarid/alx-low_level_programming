/**
 * _atoi - function atoi
 * @s: character
 * Return: return value
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int value = 0;
	
	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			value = value * 10 + (*s - '0');
		else if (value > 0)
			break;
	} while (*s++);
	return (value *i);
}
