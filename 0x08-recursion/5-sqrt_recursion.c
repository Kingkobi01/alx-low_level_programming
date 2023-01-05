/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : Number to be used
 * Return: n^0.5 if n is a perfect square, else -1
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	while (i <= (n / 2))
	{
		if ((i * i) == n)
			return (i);

		if ((i * i) > n)
		{
			return (-1);
		}
		i++;
	}
	return (_sqrt_recursion(n - 1));
}
