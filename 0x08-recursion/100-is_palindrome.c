#include "main.h"

int _strlen_recursion(char *s);


int palindrome_helper(char *s, int start, int end);


/**
 * palindrome_helper - Helps ton find palindromes
 *
 * @s: String
 * @start: Array index to begin
 * @end: Array index to end
 *
 * Return: int
 */


int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}


/**
 * is_palindrome - Is palindrome
 *
 * @s: String
 *
 * Return: Int
 */


int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}
	return (palindrome_helper(s, 0, len - 1));
}
