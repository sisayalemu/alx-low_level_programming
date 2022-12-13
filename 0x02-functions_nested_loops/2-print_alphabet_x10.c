#include "main.h"
/**
 * print_alphabet_x10 - this is a function
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		x++;
	}
}
