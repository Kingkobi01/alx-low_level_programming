/**
 * _sqrt_recursion - calculates the square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n is not a perfect square
 */
int _sqrt_recursion(int n)
{
	int i;
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return i;
	}

	return -1;
}
