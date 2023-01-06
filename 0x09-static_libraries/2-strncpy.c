#include "main.h"
/**
 * _strncpy - function for copying a string
 * @dest: variable for pointing to dest
 * @src: variable for pointing to src
 * @n: variablr for integer
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;
 
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
 
	return (dest);
}
