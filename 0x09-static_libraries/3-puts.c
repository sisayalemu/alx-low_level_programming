#include "main.h"
/**
 * _puts - function that print string
 * @s: variable for string
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
