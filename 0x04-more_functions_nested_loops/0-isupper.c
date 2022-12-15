#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks if c is uppercase
 *
 * @c: char param
 *
 * Return: int , 1 if uppercase
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
