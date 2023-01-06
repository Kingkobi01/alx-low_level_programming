#include <string.h>
int palindrome(char *s, int len);

/**
 * is_palindrome - Returns 1 if string is a palindrome
 * @s : String to be checked
 * Return: 1 if true or 0 if not true
 */

int is_palindrome(char *s)
{
	return (palindrome(s, strlen(s)));
}

/**
 * palindrome - Returns 1 if string is a palindrome
 * @s : String to be checked
 * @len : length of the string
 * Return: 1 if true or 0 if not true
 */

int palindrome(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	return (palindrome(&(s[1]), len - 2));
}
