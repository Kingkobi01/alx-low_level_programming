#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n : ...
 * Return: ...
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list numbersToBeAdded;

	if (n == 0)
		return (0);

	va_start(numbersToBeAdded, n);

	i = 0;
	result = 0;

	while (i < n)
	{
		result += va_arg(numbersToBeAdded, int);

		i++;
	}
	va_end(numbersToBeAdded);
	return (result);
}
