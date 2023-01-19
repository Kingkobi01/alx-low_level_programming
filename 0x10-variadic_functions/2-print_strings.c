#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - ...
 * @separator : ...
 * @n : ...
 * Return:...
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strsToBePrinted;

	if ((n > 0))
	{
		va_start(strsToBePrinted, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(strsToBePrinted, char *);

			(string != NULL) ? printf("%s", string) : printf("(nil)");

			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(strsToBePrinted);
	printf("\n");
}
