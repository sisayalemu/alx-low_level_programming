#include "main.h"
/**
 *print_last_digit - print the last digit of a number
 *@n: variable to be tested
 *Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar('0' + ld);
	return (ld);
}
