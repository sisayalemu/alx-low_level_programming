#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: variable for pointing to dest
 * @src: variable for pointing to src
 * @n: variable for integer
 *
 * Return: it result the concacnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
 
	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
 
