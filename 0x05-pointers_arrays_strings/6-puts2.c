#include <stdio.h>

/**
 * put2 - Prints every other character of a string,
 *			starting with the first character, followed by a new line
 * @str: *char param to be manipulated.
 *
 * Return: void
 */

void puts2(char *str)
{
    int i =0;
    while(str[i] != '\0')
    {
        putchar(str[i]);
        i+=2;
    }
}

