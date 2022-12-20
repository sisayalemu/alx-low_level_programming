#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: variable being used
 */
void rev_string(char *s)
{
	int len, a, b;
	char ch1, ch2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	a = 0;
	b = len - 1;

	while (b > a)
	{
		ch1 = s[a];
		ch2 = s[b];
		s[a] = ch2;
		s[b] = ch1;
		b--;
		a++;
	}
}
