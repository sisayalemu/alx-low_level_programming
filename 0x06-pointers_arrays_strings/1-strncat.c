#include "main.h"
#include <string.h>
/**
 * _strncat - a function for a purpose of two strings
 * @src: the source var for the func
 * @dest: the destination var for the func
 * @n: var to be used for the number var
 * Return: it will return the concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);

	int x = 0;

	while (x < n && *src)
	{
		dest[i + x] = *src;
		src++;
		x++;
	}

	dest[i + x] = '\0';

	return (dest);
}
