#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: variable for holding integer
 * Return: factorial of n
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
