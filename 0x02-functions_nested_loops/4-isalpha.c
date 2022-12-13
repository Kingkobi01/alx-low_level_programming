#include "main.h"

/**
 * _isalpha - Checks for
 * alphabetic character
 *
 *@c:char parameter
 *
 * Return: 1 if it's an alphabet
 * or 0 if it's not an alphabet
 */


int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
