#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks if c is a digit 
 *
 * @c: char param
 *
 * Return: int , 1 if digit
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
