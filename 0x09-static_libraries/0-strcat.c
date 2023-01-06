#include "main.h"
/**
 * _strcat - function for concacnate two string
 * @dest: variable for pointing to dest
 * @src: variable for pointing to src
 * Return: concacnated string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
