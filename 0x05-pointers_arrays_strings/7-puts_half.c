#include "main.h"
/**
 * puts_half - results in second half of the string
 * @str: variable to be used
 */
void puts_half(char *str)
{
	int len, x, a;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	x = (len - 1) / 2;

	for (a = x + 1; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
