#include "main.h"
/**
 * print_number - a function for a purpose of printing num char
 * @n: a variable being used
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}

