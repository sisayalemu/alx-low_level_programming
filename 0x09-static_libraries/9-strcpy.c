#include "main.h"
		
/**
 * *_strcpy - a function that copies string
 * @dest: variable for pointing to dest
 * @src: variable for pointing to src
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;
 
	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
