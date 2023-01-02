#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer variable
 * @b: variable for data holding
 * @n: length for array of pointer
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s)
}
