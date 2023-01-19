#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - ...
 * @separator : ...
 * @n : ...
 * Return:...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numsToBePrinted;

	if (separator != NULL || (n > 0))
	{
		va_start(numsToBePrinted, n);

		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				printf("%d%s", va_arg(numsToBePrinted, unsigned int), separator);
			}
			else
				printf("%d", va_arg(numsToBePrinted, unsigned int));
		}
	}
	va_end(numsToBePrinted);
	printf("\n");
}
