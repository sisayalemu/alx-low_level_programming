#include "main.h"
/**
 *_abs - print the absolute value of int
 *@n: variable being checked
 *Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
