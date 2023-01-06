#include "main.h"
/**
 * _memset - function that fill memory
 * @s: variable for pointer
 * @b: variable for char
 * @n: variable for integer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
