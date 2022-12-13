#include "main.h"
/**
 * print_alphabet - c program that print alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
