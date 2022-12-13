#include "main.h"
/**
 * main - c program that print alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
	return (0);
}
