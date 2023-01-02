#include "main.h"

/**
 * _memcpy - fucntion for copying n bytes for source  to dest
 * @dest: variable for destination pointer
 * @src: variable for source pointer
 * @n: length for array
 * Return: result for dest variable
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
