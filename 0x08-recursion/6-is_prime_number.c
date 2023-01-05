#include "main.h"
/**
 * find_prime - function for finding a prime
 * @n: variable for integer
 * @m: variable for integer
 * Return: it output a boolean value
 */

int divisors(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	else if (x / 2 > n)
	{
		return (find_prime(y + 2, x));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - funtion return a prime num
 * @n: variable  for integer
 * Return: after recursion it result prime num
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (find_prime(3, n));
	}
}
