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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}
		s++;
	}
return (a);
}
