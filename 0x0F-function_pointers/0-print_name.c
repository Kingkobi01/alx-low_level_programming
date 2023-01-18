#include <stdio.h>
#include <string.h>

/**
 * print_name - ...
 * @name : ...
 * @f : ...
 * Return: ...
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
