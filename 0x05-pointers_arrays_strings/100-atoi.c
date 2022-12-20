#include "main.h"
/**
 * _atoi - a function which convert string into an integer
 * @s: variable being used
 * Return: it return an integer
 */
int _atoi(char *s)
{
	int opre;
	int a;
	unsigned int output;

	opre = 1;
	a = 0;
	output = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
		{

			opre *= -1;
		}
		a++;
	}	
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		output = (output * 10) + (s[a] - '0');
		a++;
	}
	output *= opre;

	return (output);
}
