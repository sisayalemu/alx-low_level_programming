#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @src: source var
 * @dest: destination var
 * Return: to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (a = 0; a <= len; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
