#include "main.h"
/**
 * _sqrt_recursion - function that returns the sqrt of num
 * @n: variable for integer
 * Return: result for sqrt integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursion func for _sqrt_recursion
 * @n: variable for integer
 * @a: variable for integer
 * Return: sqrt of the number
 */

int _sqrt(int n, int a)
{
	if (n < 0)
		return (-1);
	if ((a * a) > n)
		return (-1);
	if (a * a == n)
		return (a);

	return (_sqrt(n, a + 1));
}
