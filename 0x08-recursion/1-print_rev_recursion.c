#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s : String to be printed
 * Return : nothing...
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
