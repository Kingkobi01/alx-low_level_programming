#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>


/**
 * main - Shows
 * whether a number is
 * positive or negative
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{

	srand(time(0));
	/* your code goes there */

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
