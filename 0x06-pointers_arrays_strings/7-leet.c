#include "main.h"
/**
 * leet - a function for the purpose of encoding a string
 * @s: variable to be used
 * Return: it result encoded string
 */
char *leet(char *s)
{
	int a;
	int b;
	int c;

	char x[] = "oO1leEaAtT";
	char y[] = "0011334477";

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		c = 0;
		while (x[b] != '\0')
		{
			if (s[a] == x[b])
			{
				c = b;
				s[a] = y[k];
			}
			b++;
		}
		a++;
	}
	return (s);
}
