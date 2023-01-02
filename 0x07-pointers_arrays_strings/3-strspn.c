#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: variable for holding string
 * @accept: variable for holding the substring from s
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		if (!(--*accept))
			break;
		accept = b;
	}

	return (a);
}
