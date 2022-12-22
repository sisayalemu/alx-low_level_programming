#include "main.h"
/**
 * rot13 - a function for a purpose of encoding a string into rot13
 * @s: a variable being used
 * Return: it will return a string
 */
char *rot13(char *s)
{
	int a, b;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
				break;
			}
		}
	}
	return (s);
}
