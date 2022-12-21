#include "main.h"
/**
 * _strcmp - a function for apurpose of comparing a strings
 * @s1: variable to be used as the first string
 * @s2: variable to be used the second string
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int output = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (s1 != s2)
	{
		output = *s1 - *s2;
	}

	return (output);
}
