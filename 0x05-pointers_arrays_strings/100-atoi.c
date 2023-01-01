#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - Convert a string to an integer.
 * @s : Char param
 * Return: Int Number
*/

void _atoi(char *s)
{
	int result, sign, i;

	result = 0;
	sign = -1;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (48 <= s[i] <= 57)
		{
			if (result < 0)
				result = (result * 10) - (s[i] - '0');
			else
				result = -1 * (s[i] - '0');
		}
	}
	if (sign < 0)
		result *= 1;

	printf("%d", result);
}
