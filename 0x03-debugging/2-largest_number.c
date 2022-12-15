#include "main.h"
/**
 * largest_number - esult the largest number
 * @a: first int var
 * @b: second int var
 * @c: thrid int var
 * Return: large int
 */
int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
	{
		l = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
