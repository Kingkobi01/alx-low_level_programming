#include <stdio.h>
/**
 * set_string - Sets the value of a pointer to a char.
 * @s : Pointer to the pointer to the string to be used
 * @to : the variable that will have its value changed
 * Return: nothing...
 */
void set_string(char **s, char *to)
{
	*s = to;
}
