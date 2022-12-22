#include "main.h"
/**
 * rot13 - a function for purpose of string encoding by rot13
 * @s: a string var
 * Return: it result an encoding string
 */
char *rot13(char *s)
{
	int a;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *pt = s;

	while (*s)
	{
		for (a = 0; a <= 52; a++)
		{
			if (*s == alphabet[a])
			{
				*s = ROT13[a];
				break;
			}
		}
		s++;
	}
	return (pt);
}
