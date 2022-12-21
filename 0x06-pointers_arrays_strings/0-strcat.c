#include "main.h"
/**
 * _strcat - a function used for concatenate one string into another string
 * @src:a variable to be the source
 * @dest: variable to be the destination
 * Return: concated string
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
