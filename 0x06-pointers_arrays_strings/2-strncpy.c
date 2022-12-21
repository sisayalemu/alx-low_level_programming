#include "main.h"
/**
 * _strncpy - this is a function that copies a string
 * @src: variable to be used as a source
 * @dest: variable used as a destination
 * @n: used as a num variable
 * Return: nothing to return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
