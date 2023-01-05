/**
 * factorial - Returns the factorial of a given number
 * @n : Number to be used
 * Return: Integer, Factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
