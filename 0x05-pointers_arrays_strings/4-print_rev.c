#include "main.h"
/**
 * print_rev - a function that reverse a string
 * @s: variable being store a string
 */
void print_rev(char *s)
{
	int i = 0;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
