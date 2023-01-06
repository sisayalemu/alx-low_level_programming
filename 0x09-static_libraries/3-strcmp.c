#include "main.h"
/**
 * _strcmp - function that compare string values
 * @s1: variable for pointing to s1
 * @s2: variable for pointing to s2
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int a;
 
	a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}
