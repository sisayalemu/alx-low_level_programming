#include "main.h"
/**
 * _strchr - function search for occurance of char
 * @s: variable for pointer
 * @c: variable for character
 * Return: it result string
 */
char *_strchr(char *s, char c)
{
	int a;
 
	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
