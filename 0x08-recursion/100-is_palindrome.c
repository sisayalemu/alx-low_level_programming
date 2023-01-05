#include "main.h"

/**
 * _strlen_recursion - length for string func
 * @s: variable for pointer
 * Return: recursion for len of str
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pal - function for checking palindrome
 * @s: variable for pointer
 * @pos: variable for integer
 * Return: by returning boolean value
 */

int pal(char *s, int pos)
{
	if (pos < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pal(s + 1, pos - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (pal(s, length - 1));
}
