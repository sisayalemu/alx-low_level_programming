#include "main.h"
/**
 * _pow_recursion -  function that returns the value of x raised to the power of y
 * @x: variable for base
 * @y: variable for power
 * Return: x raised pow y
 */
int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	ans *= _pow_recursion(x,y-1);

	return (ans);
}
