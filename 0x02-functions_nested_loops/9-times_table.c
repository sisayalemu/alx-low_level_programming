#include "main.h"
/**
 *times_table - rints time_table
 *Return: Always 0 (success)
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0;x <= 9; x++)
	{
		_putchar('0');

		for (y = 1;y <= 9; y++)
		{
			int output = x * y;

			_putchar(',');
			_putchar(' ');
			(output <= 9) ?
			_putchar(' ') :
			_putchar('0' + (output / 10));
			_putchar('0' + (output % 10));
		}
		_putchar('\n');
	}
}
