#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s : String to be used
 * Return: The number of ascii characters in the string
 *		whithout the '\0'
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
