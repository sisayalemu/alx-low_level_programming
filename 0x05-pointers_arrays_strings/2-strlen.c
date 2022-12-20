#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: variable to calculate the length of string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	int a;

	a = 0;

	while (s[a] != '\0')
	{
		len++;

		a++;
	}

	return (len);
}
