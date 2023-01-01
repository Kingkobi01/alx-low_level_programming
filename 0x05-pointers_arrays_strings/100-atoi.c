#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - Convert a string to an integer.
 * @s : Char param
 * Return: Int Number
 */

int _atoi(char *s)
{
	int result, sign, i;

	result = 0;
	sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if ((s[i] < 58) && (s[i] > 47))
		{
			if (result < 0)
				result = (result * 10) - (s[i] - '0');
			else
				result = -1 * (s[i] - '0');

			if ((s[i] > 58) || (s[i] < 47))
				continue;
		}
	}
	if (sign < 0)
		result *= 1;

	return (result);
}
