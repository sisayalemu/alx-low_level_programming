#include "main.h"
/**
 * cap_string - a function for a purpose of capitalizing a string
 * @s: variable being used
 * Return: it result in returing a string
 */
char *cap_string(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		if ((s[a - 1] == ' ' || s[a - 1] == '\n'
		|| s[a - 1] == '\t' || s[a - 1] == ','
		|| s[a - 1] == ';' || s[a - 1] == '!'
		|| s[a - 1] == '?' || s[a - 1] == '"'
		|| s[a - 1] == '{' || s[a - 1] == '}'
		|| s[a - 1] == '(' || s[a - 1] == ')'
		|| s[a - 1] == '.')
		&& (s[a] >= 'a' && s[a] <= 'z'))
		{
			s[a] = s[a] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[a] = s[a];
		}
		a++;
	}
	return (s);
}

