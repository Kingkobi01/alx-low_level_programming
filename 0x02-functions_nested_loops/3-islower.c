#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for
 * a lowercase character.
 *
 *@c : char  parameter
 * Return: int, 1 if c is lowercase
 * or 0 if c is not lowercase;
 */




int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
