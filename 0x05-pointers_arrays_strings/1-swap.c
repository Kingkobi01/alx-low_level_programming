#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a : Pointer to first int param
 * @b : Pointer to second int param
 *
 * Return : void
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


