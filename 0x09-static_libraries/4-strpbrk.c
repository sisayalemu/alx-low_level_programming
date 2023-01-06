#include "main.h"
/**
 * _strpbrk - function for bytes
 * @s: variable for pointer
 * @accept: variable for pointer
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
 
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}
 
return ('\0');
}
