#include "main.h"
/**
 * find_prime - a function for finding for prime
 * @x: variable foe integer input
 * @y: variable for integer input
 * Return: it outputs a boolean value
 */
int find_prime(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (y == 1)
	{
		return (0);
	}
	
	return (find_prime(x, y - 1));
}
/**
 * is_prime_number - function for printing prime numbers
 * @n: variable for  integer
 * Return: prime num after recursion
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}
